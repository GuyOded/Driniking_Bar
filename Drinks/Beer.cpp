/*
 * Beer.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "Beer.h"

const std::string Beer::DEFAULT_PREPARATION=
		"Pour in a beer glass and serve";

Beer::Beer(std::string name, std::string preparation):Drink(name, preparation) {
}

Beer::Beer(const Beer& other)
    :Drink(other.m_name, other.m_preparation)
{}

Beer::~Beer() {
}

/**
 * The function supposes to actually prepare a drink but since I don't
 * have any animation or something like that I'm just using it to get
 * the preparation string.
 * @return the instructions that describe how the drink was prepared
 */
std::string Beer::prepare()
{
	return m_preparation;
}

Beer* Beer::clone() const
{
	return new Beer(*this);
}
