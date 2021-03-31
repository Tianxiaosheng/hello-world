#include "MathFuncations.h"

double power(double base, int exponent)
{
	float out_value;

	out_value = 1.0;
	if (exponent > 0)
	{
	    for (int i = 0; i < exponent; i++)
		{
			out_value *= base;
		}	
	}

	return out_value;	
}
