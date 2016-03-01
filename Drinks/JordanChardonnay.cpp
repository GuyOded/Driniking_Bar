/*
 * JordanChardonnay.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#include "JordanChardonnay.h"

const std::string JordanChardonnay::NAME = "Jordan Chardonnay";

JordanChardonnay::JordanChardonnay(int year)
                :WhiteWine(JordanChardonnay::NAME, year)
{}

JordanChardonnay::JordanChardonnay(const JordanChardonnay& other)
                :WhiteWine(other.m_name, other.m_year)
{}

JordanChardonnay::~JordanChardonnay() {}

JordanChardonnay* JordanChardonnay::clone() const
{
	return new JordanChardonnay(*this);
}
