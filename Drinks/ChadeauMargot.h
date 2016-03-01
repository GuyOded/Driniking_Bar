/*
 * ChadeauMargot.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef CHADEAUMARGOT_H_
#define CHADEAUMARGOT_H_

#include "RedWine.h"

class ChadeauMargot: public RedWine {
private:
	static const std::string NAME;
public:
	ChadeauMargot(int year);
	ChadeauMargot(const ChadeauMargot& other);
	virtual ~ChadeauMargot();

	virtual ChadeauMargot* clone() const;
};

#endif /* CHADEAUMARGOT_H_ */
