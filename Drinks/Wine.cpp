/*
 * Wine.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "Wine.h"
#include <sstream>

/**
 *
 * @param name-the name of the wine
 * @param temp-the temperature
 * @param year-the year the wine was made in(or aged since I think)
 */
Wine::Wine(std::string name, int temp, int year)
	:Drink(name), m_temp(temp), m_year(year)
{
	//basically converts to string
	std::string temp_string;
	std::stringstream ss;
	ss << temp;
	ss >> temp_string;

	m_preparation = "Keep it in " + temp_string + " degrees celsius and serve";
}

/**
 * copy constructor
 * @param other
 */
Wine::Wine(const Wine& other)
    :Drink(other.m_name, other.m_preparation), m_temp(other.m_temp), m_year(other.m_year)
{}

Wine::~Wine() {
}

/**
 *
 * @return the name plus the year in brackets
 */
std::string Wine::getName()
{
	std::string year;
	std::stringstream ss;
	ss << m_year;
	ss >> year;
	return m_name + " (year " + year + ")";
}

std::string Wine::prepare()
{
	return m_preparation;
}

Wine* Wine::clone() const
{
	return new Wine(*this);
}
