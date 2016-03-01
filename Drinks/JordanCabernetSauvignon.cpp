/*
 * JordanCabernetSauvignon.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "JordanCabernetSauvignon.h"

const std::string JordanCabernetSauvignon::NAME = "Jordan Cabernet Sauvignon";

JordanCabernetSauvignon::JordanCabernetSauvignon(int year)
                       :RedWine(JordanCabernetSauvignon::NAME, year)
{

}

JordanCabernetSauvignon::JordanCabernetSauvignon(const JordanCabernetSauvignon& other)
                       :RedWine(other.m_name, other.m_year)
{}

JordanCabernetSauvignon::~JordanCabernetSauvignon() {
}

JordanCabernetSauvignon* JordanCabernetSauvignon::clone() const
{
	return new JordanCabernetSauvignon(*this);
}
