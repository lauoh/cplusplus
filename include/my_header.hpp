//  Copyright (c) 2017 Antoine Tran Tan x lausha
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <cmath>

double exo1(double rayon)
{
	double aire;
	aire = 3.14*rayon*rayon;
	return aire;
}

void exo2(short a, short b)
{
	short y;
	y = a < b && !a;

}

double exo3(double rayon)
{
	double volume;
	volume = 4/3*3.14*rayon*rayon*rayon;
	return volume;
}
#endif // MY_HEADER_HPP

