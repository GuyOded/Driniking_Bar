/*
 * WhiteWine.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef WHITEWINE_H_
#define WHITEWINE_H_

#include "Wine.h"

class WhiteWine: public Wine {
private:
	static const int DEFAULT_TEMPERATURE = 7;//a white wine is usually served
	                                         //at 7 degrees celsius
public:
	WhiteWine(std::string name, int year, int temp = DEFAULT_TEMPERATURE);
	WhiteWine(const WhiteWine& other);
	virtual ~WhiteWine();

	virtual WhiteWine* clone() const;
};

#endif /* WHITEWINE_H_ */
