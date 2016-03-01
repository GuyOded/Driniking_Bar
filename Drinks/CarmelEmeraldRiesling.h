/*
 * CarmelEmeraldRiesling.h
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#ifndef CARMELEMERALDRIESLING_H_
#define CARMELEMERALDRIESLING_H_

#include "WhiteWine.h"

class CarmelEmeraldRiesling: public WhiteWine {
private:
	static const std::string NAME;
public:
	CarmelEmeraldRiesling(int year);
	CarmelEmeraldRiesling(const CarmelEmeraldRiesling& other);
	virtual ~CarmelEmeraldRiesling();

	virtual CarmelEmeraldRiesling* clone() const;
};

#endif /* CARMELEMERALDRIESLING_H_ */
