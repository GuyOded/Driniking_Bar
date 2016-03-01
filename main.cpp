/*
 * main.cpp
 *
 *  Created on: Feb 11, 2016
 *      Author: guy
 */
#include "Bar.h"

int main()
{
	Bar b;
	//b.serveCustomer();
	for(int i = 0; i < b.getShelfSize(); ++i)
	{
		b.serveOneDrink(i);
	}

	b.serveOneDrink(100);
	return 0;
}
