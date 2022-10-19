#include "main.h"

/**
*_abs - Prints the abslute value of an integer
*
*@a: This is the number whose absolute value is to be printed
*
*Return: Success 0
*/

int _abs(int a)
{
	int absvalue;

	if (a > 0)
	{
	absvalue = a;
	}
	else if (a < 0)
	{
	absvalue = a * (-1);
	}
	return (absvalue);
}
