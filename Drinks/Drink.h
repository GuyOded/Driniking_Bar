/*
 * Drink.h
 *
 * an abstract base class to all the other drinks
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef DRINK_H_
#define DRINK_H_
#include <string>

class Drink {
protected:
	std::string m_name;
	std::string m_preparation;//specify how the drink was made
public:
	Drink(std::string name = "Drink", std::string preperation = "?");
	virtual Drink* clone() const = 0;
	virtual ~Drink();
	virtual std::string prepare() = 0;
	virtual std::string getName();
};

#endif /* DRINK_H_ */
