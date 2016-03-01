/*
 * WhiteWine.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "WhiteWine.h"

WhiteWine::WhiteWine(std::string name, int year, int temp):Wine(name, temp, year){
}

WhiteWine::WhiteWine(const WhiteWine& other)
         :Wine(other.m_name, other.m_temp, other.m_year)
{}

WhiteWine::~WhiteWine(){
}

WhiteWine* WhiteWine::clone() const
{
	return new WhiteWine(*this);
}
