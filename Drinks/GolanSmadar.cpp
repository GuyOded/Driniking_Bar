/*
 * GolanSmadar.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#include "GolanSmadar.h"

const std::string GolanSmadar::NAME = "Golan Smadar";

GolanSmadar::GolanSmadar(int year)
           :WhiteWine(GolanSmadar::NAME, year)
{

}

GolanSmadar::GolanSmadar(const GolanSmadar& other)
           :WhiteWine(other.m_name, other.m_year)
{}

GolanSmadar::~GolanSmadar() {
}

GolanSmadar* GolanSmadar::clone() const
{
	return new GolanSmadar(*this);
}
