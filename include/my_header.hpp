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

int exo4()
{
	long b=0;
	unsigned short a = 0;
	a = lancer_de();
	
		if ((a == 2) || (a == 4) || (a == 6))
			b = b + 1;
		if (a = 3)
			b = b * 2;
		if (a = 5)
			b = 0;
		else
			b = b;
		return b;
}

void exo5()
{
	unsigned short joueur1 = 0;
	unsigned short joueur2 = 0;

	while (joueur1 < 50 || joueur2 < 50)
	{
		 joueur1= exo4();
		joueur2= exo4();
	}

}

#endif // MY_HEADER_HPP

