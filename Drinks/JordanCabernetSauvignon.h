/*
 * JordanCabernetSauvignon.h
 *
 *  Created on: Feb 12, 2016
 *      Author: guy
 */

#ifndef JORDANCABERNETSAUVIGNON_H_
#define JORDANCABERNETSAUVIGNON_H_

#include "RedWine.h"

class JordanCabernetSauvignon: public RedWine {
private:
	static const std::string NAME;
public:
	JordanCabernetSauvignon(int year);
	JordanCabernetSauvignon(const JordanCabernetSauvignon& other);
	virtual ~JordanCabernetSauvignon();

	virtual JordanCabernetSauvignon* clone() const;
};

#endif /* JORDANCABERNETSAUVIGNON_H_ */
