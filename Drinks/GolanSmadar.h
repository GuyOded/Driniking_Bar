/*
 * GolanSmadar.h
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#ifndef GOLANSMADAR_H_
#define GOLANSMADAR_H_

#include "WhiteWine.h"

class GolanSmadar: public WhiteWine {
private:
	static const std::string NAME;
public:
	GolanSmadar(int year);
	GolanSmadar(const GolanSmadar& other);
	virtual ~GolanSmadar();

	virtual GolanSmadar* clone() const;
};

#endif /* GOLANSMADAR_H_ */
