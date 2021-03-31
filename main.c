#include <stdlib.h>
#include <stdio.h>
#include "config.h"

#ifdef USE_MYMATH
	#include "math/MathFuncations.h"
#else
	#include <math.h>
#endif

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("usage: %s base exponent \n", argv[0]);
	}

	double result, base;
	int exponent;

	base = atof(argv[1]);
	exponent = atoi(argv[2]);
#ifdef USE_MYMATH
	result = power(base, exponent);
	printf("my_math %g ^ %d is %g\n", base, exponent, result);

#else
    result = pow(base, exponent);
	printf("standard_math %g ^ %d is %g\n", base, exponent, result);
#endif

}

