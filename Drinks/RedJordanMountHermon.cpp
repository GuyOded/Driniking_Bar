/*
 * RedJordanMountHermon.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#include "RedJordanMountHermon.h"

const std::string RedJordanMountHermon::NAME = "Red Jordan Mount Hermon";

RedJordanMountHermon::RedJordanMountHermon(int year)
                    :RedWine(RedJordanMountHermon::NAME, year) {

}

RedJordanMountHermon::RedJordanMountHermon(const RedJordanMountHermon& other)
                    :RedWine(other.m_name, other.m_year)
{}

RedJordanMountHermon::~RedJordanMountHermon() {
}

RedJordanMountHermon* RedJordanMountHermon::clone() const
{
	return new RedJordanMountHermon(*this);
}
