/*
 * Beer.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef BEER_H_
#define BEER_H_

#include "Drink.h"
#include <string>

class Beer: public Drink {
private:
	static const std::string DEFAULT_PREPARATION;//the same default string for all
	                                             //beers
public:
	Beer(std::string name, std::string preparation = DEFAULT_PREPARATION);
	virtual ~Beer();
	virtual std::string prepare();
	Beer(const Beer& other);
	virtual Beer* clone() const;
};

#endif /* BEER_H_ */
