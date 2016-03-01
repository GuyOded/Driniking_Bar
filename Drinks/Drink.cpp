/*
 * Drink.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "Drink.h"

Drink::Drink(std::string name, std::string preparation)
                :m_name(name), m_preparation(preparation) {
}

Drink::~Drink() {
}

std::string Drink::getName()
{
	return m_name;
}

