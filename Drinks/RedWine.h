/*
 * RedWine.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef REDWINE_H_
#define REDWINE_H_

#include "Wine.h"

class RedWine: public Wine {
private:
	static const int DEFAULT_TEMPERATURE = 17;//red wines are usually served at room
	                                          //temperature
public:
	RedWine(std::string name, int year, int temp = DEFAULT_TEMPERATURE);
	RedWine(const RedWine& other);
	virtual ~RedWine();
	virtual RedWine* clone() const;

};

#endif /* REDWINE_H_ */
