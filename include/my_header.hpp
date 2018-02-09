//  Copyright (c) 2017 Antoine Tran Tan x lausha
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <cmath>
int essayer_code (unsigned short code);

void exo3(void)
{
	int test = 0;
	unsigned short code = 0;

	test = essayer_code(code);
	while (test == 0)
	{
		code += 1;
		test = essayer_code(code);

	}
}


unsigned short lancer_de(void);

void exo4()
{
	long b=0;
	unsigned short a = 0;
	a = lancer_de();
	while (b != 1)
	{
		if ((a == 2) || (a == 4) || (a == 6))
			b = b + 1;
		if (a = 3)
			b = b * 2;
		if (a = 5)
			b = 0;
		else
			b = b;
	}
}

#endif // MY_HEADER_HPP

