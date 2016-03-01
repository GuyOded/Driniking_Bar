/*
 * RedWine.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "RedWine.h"

RedWine::RedWine(std::string name, int year, int temp):Wine(name, temp, year) {
}

RedWine::RedWine(const RedWine& other)
       :Wine(other.m_name, other.m_temp, other.m_year)
{}

RedWine::~RedWine() {
}

RedWine* RedWine::clone() const
{
	return new RedWine(*this);
}

