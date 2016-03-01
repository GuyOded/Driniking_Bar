/*
 * JordanChardonnay.h
 *
 *  Created on: Feb 13, 2016
 *      Author: guy
 */

#ifndef JORDANCHARDONNAY_H_
#define JORDANCHARDONNAY_H_

#include "WhiteWine.h"

class JordanChardonnay: public WhiteWine {
private:
	static const std::string NAME;
public:
	JordanChardonnay(int year);
	JordanChardonnay(const JordanChardonnay& other);
	virtual ~JordanChardonnay();

	virtual JordanChardonnay* clone() const;
};

#endif /* JORDANCHARDONNAY_H_ */
