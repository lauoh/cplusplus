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

#endif // MY_HEADER_HPP

