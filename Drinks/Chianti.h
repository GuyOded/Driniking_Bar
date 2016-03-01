/*
 * Chianti.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef CHIANTI_H_
#define CHIANTI_H_

#include "RedWine.h"

class Chianti: public RedWine {
private:
	static const std::string NAME;
public:
	Chianti(int year);
	Chianti(const Chianti& other);
	virtual ~Chianti();

	virtual Chianti* clone() const;
};

#endif /* CHIANTI_H_ */
