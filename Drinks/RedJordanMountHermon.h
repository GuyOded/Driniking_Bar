/*
 * RedJordanMountHermon.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef REDJORDANMOUNTHERMON_H_
#define REDJORDANMOUNTHERMON_H_

#include "RedWine.h"

class RedJordanMountHermon: public RedWine {
private:
	static const std::string NAME;
public:
	RedJordanMountHermon(int year);
	RedJordanMountHermon(const RedJordanMountHermon& other);
	virtual ~RedJordanMountHermon();

	virtual RedJordanMountHermon* clone() const;
};

#endif /* REDJORDANMOUNTHERMON_H_ */
