/*
 * Chianti.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "Chianti.h"

const std::string Chianti::NAME = "Chianti";

Chianti::Chianti(int year):RedWine(Chianti::NAME, year) {
}

Chianti::Chianti(const Chianti& other):RedWine(other.m_name, other.m_year)
{}

Chianti::~Chianti() {
}

Chianti* Chianti::clone() const
{
	return new Chianti(*this);
}
