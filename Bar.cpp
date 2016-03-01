/*
 * Bar.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#include "Bar.h"
#include <iostream>
#include <sstream>
#include <string>

/**
 * The default and only constructor.
 * The commands for asking what the last drink was and the command for leaving the bar
 * are 99 and 100 by default. If the size of the array m_shelf is bigger then 98 those
 * commands equals to  SHELF_SIZE + 1, SHELF_SIZE + 2.
 * At the start the index of the last drink that was ordered is -1 to signify that
 * no drink was ordered yet.
 * m_stock_index must always point to the next uninitialized index in the array,
 * therefore it is initialized to the number of drinks initialized in the constructor
 * (11).
 *
 */
Bar::Bar():m_last(-1), m_last_drink_command(99),
		   m_leave_command(100), m_stock_index(Bar::DEFAULT_NUM_OF_DRINKS)
{

	if(Bar::SHELF_SIZE >= 99){
		m_last_drink_command = SHELF_SIZE + 1;
		m_leave_command = SHELF_SIZE + 2;
	}

	m_shelf[0] = new Beer("Heineken");
	m_shelf[1] = new Beer("Tuborg");
	m_shelf[2] = new Beer("Carlsberg");
	m_shelf[3] = new Beer("Maccabi");
	m_shelf[4] = new CarmelEmeraldRiesling(1986);
	m_shelf[5] = new GolanSmadar(1989);
	m_shelf[6] = new JordanChardonnay(1997);
	m_shelf[7] = new Chianti(1997);
	m_shelf[8] = new RedJordanMountHermon(1994);
	m_shelf[9] = new JordanCabernetSauvignon(1997);
	m_shelf[10] = new ChadeauMargot(1997);
}

/**
 * in the destructor we free all the dynamically allocated array elements
 */
Bar::~Bar()
{
	for(int i = 0; i < m_stock_index; ++i)
		delete m_shelf[i];
}

/**
 * prints a message describing all the available drinks.
 */
void Bar::listOptions()
{
	using namespace std;
	cout << "(0)\tlist options\n";
	for(int i = 0; i < SHELF_SIZE; ++i)
	{
		cout << "(" << (i + 1) << ")\t" << m_shelf[i]->getName() << "\n";
	}
	cout << "(" << m_last_drink_command << ")\tHow did you prepare my last drink?" << "\n";
	cout << "(" << m_leave_command << ")\tLeave the bar" << endl;
}

/**
 * void serveCustomer();
 *
 * The function waits for an input in the standard input and calls a function
 * that handles the input line correctly.
 *
 */
void Bar::serveCustomer()
{
	using namespace std;
	bool continue_serving = true;
	string input_line = "";

	while(continue_serving)
	{
		cout << "What can I get sir? (0 to list options)\n";
		getline(cin, input_line);
		continue_serving = parseInput(input_line);
	}
}

/**
 * bool isValid(std::string input);
 *
 * Checks whether the input given to the function is valid - in range
 * with the accepted commands and that it is an integer.
 *
 * @param input
 * @return true if the input was valid or false otherwise
 */
bool Bar::isValid(std::string input)
{
	using namespace std;

	for(string::iterator it = input.begin(); it != input.end(); ++it)
	{
		if(*it < '0' || *it > '9' )
		{
			cout << "???\n";
			return false;
		}
	}

	//parse integer
	istringstream ss(input);
	int command;
	ss >> command;

	if((command > m_stock_index) && (command != m_leave_command)
			&& (command != m_last_drink_command))
	{
		cout << "???\n";
		return false;
	}

	return true;
}

/**
 * bool fillOrder(int command);
 *
 * Given a command as a parameter, the function prints whatever needs to be printed.
 *
 * @param command
 * @return false if the command meant that the customer is leaving the bar
 *         true otherwise
 */
bool Bar::fillOrder(int command)
{
	using namespace std;

	bool exit_value = true;

	if(command == 0)
	{
		listOptions();
	}
	else if(command == m_leave_command)
	{
		cout << "Bye Bye\n";
		exit_value = false;
	}
	else if(command == m_last_drink_command)
	{
		//in case the customer didn't order anything print this message
		if(m_last == -1)
		{
			cout << "You haven't ordered anything yet...\n";
		}
		else
		{
			//specify the last order and how it is made.
			cout << "You ordered " << m_shelf[m_last]->getName() << ".\n";
			cout << "All you do is: " << m_shelf[m_last]->prepare() << ".\n";
		}
	}
	else
	{
		cout << m_shelf[command - 1]->getName() << " coming right up.\n";
		m_last = command - 1;
	}
	return exit_value;
}

/**
 * If the input parameter is valid the command will extract the integer
 * from it and call the function fillOrder that will take care of the rest
 * @param input
 * @return false if the customer requested to leave the bar.
 */
bool Bar::parseInput(std::string input)
{
	using namespace std;
	//validate input
	if(!isValid(input))
		return true;

	//convert to int
	istringstream input_stream(input);
	int command;
	input_stream >> command;

	return fillOrder(command);
}

/**
 * If one wants to add more drinks apart from those add in the construction of
 * the object he use this function and provide a pointer to an object that
 * inherits Drink.
 * If we got to the end of the array the function returns false and nothing
 * is done.
 *
 * @param new_drink- a pointer to a Drink object
 * @return true if the drink was successfully added or false if the array
 *         is full.
 */
bool Bar::addDrink(Drink* new_drink)
{
	if(m_stock_index >= SHELF_SIZE)
		return false;
	m_shelf[m_stock_index++] = new_drink->clone();
	return true;
}

/**
 * bool serveOneDrink(int command)
 *
 * Instead of using the method start and have the object constantly
 * request input from standard input, one may use this method that allows
 * to request one order at a time. The command is given as an argument to the
 * method. It is possible to use this method to simulate a customer that orders
 * all kinds of drinks. main.cpp contains an example of that.
 *
 * @param command - an example
 * @return false if the command was invalid and therefore not executed
 *         or true otherwise
 */
bool Bar::serveOneDrink(int command)
{
	using namespace std;
	string command_str;
	stringstream ss;
	ss << command;
	ss >> command_str;
	cout << "What can I get sir? (0 to list options)\n";
	if(!isValid(command_str))
		return false;

	fillOrder(command);

	return true;
}

/**
 * @return the length of the drinks array.
 */
int Bar::getShelfSize()
{
	return m_stock_index;
}
