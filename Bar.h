/*
 * Bar.h
 *
 * The Prancing Pony
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#ifndef BAR_H_
#define BAR_H_

#include "Drinks/Drinks.h"

class Bar {
private:
	static const int SHELF_SIZE = 11;//The length of the drink array - m_shelf
	static const int DEFAULT_NUM_OF_DRINKS = 11;//number of drinks that are initialized in the constructor

	int m_last;//The last drink that was ordered
	Drink* m_shelf[SHELF_SIZE];
	int m_last_drink_command;
	int m_leave_command;
	int m_stock_index;//If the user wishes to add more drinks to the bar (apart from those added in the constructor),
	                  //he may change the member SHELF_SIZE and then use the method addDrink. In this case
	                  //the member m_stock_index is used to keep track of the next index in the drinks array
	                  //that is an index of an uninitialized element.
                      //This member is used as the length of the array in most of the checks.

	void listOptions();
	bool parseInput(std::string input);
	bool fillOrder(int command);
	bool isValid(std::string input);

public:
	Bar();
	virtual ~Bar();

	bool addDrink(Drink* new_drink);
	void serveCustomer();
	bool serveOneDrink(int command);
	int getShelfSize();
};

#endif /* BAR_H_ */
