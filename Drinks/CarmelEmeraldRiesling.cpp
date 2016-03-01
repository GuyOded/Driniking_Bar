/*
 * CarmelEmeraldRiesling.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#include "CarmelEmeraldRiesling.h"

const std::string CarmelEmeraldRiesling::NAME = "Carmel Emerald Riesling";

CarmelEmeraldRiesling::CarmelEmeraldRiesling(int year)
                     :WhiteWine(CarmelEmeraldRiesling::NAME, year)
{
}

CarmelEmeraldRiesling::CarmelEmeraldRiesling(const CarmelEmeraldRiesling& other)
                     :WhiteWine(other.m_name, other.m_year)
{}

CarmelEmeraldRiesling::~CarmelEmeraldRiesling() {
}

CarmelEmeraldRiesling* CarmelEmeraldRiesling::clone() const
{
	return new CarmelEmeraldRiesling(*this);
}
