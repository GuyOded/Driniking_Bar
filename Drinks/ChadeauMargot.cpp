/*
 * ChadeauMargot.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "ChadeauMargot.h"

const std::string ChadeauMargot::NAME = "Chadeau Margot";

ChadeauMargot::ChadeauMargot(int year):RedWine(ChadeauMargot::NAME, year) {
}

ChadeauMargot::ChadeauMargot(const ChadeauMargot& other):RedWine(other.m_name, other.m_year)
{}

ChadeauMargot::~ChadeauMargot() {
}

ChadeauMargot* ChadeauMargot::clone() const
{
	return new ChadeauMargot(*this);
}
