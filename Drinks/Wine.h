/*
 * Wine.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef WINE_H_
#define WINE_H_

#include "Drink.h"
#include <string>

class Wine: public Drink {
protected:
	const int m_temp;//the temperature the wine is served at
	const int m_year;
public:
	Wine(std::string name, int temp, int year);
	Wine(const Wine& other);
	virtual ~Wine();
	virtual std::string getName();
	virtual std::string prepare();
	virtual Wine* clone() const;
};

#endif /* WINE_H_ */
