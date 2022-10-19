#include "main.h"

/**
*print_last_digit - Prints the last digit of an integer
*
*@n: The number whose last digit is to be printed
*
*Return: 0 successful
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
	}
	else if (n < 0)
	{
		last_digit = (n % 10 * -1);
	}
	else
	{
		last_digit = 0;
	}
	_putchar(last_digit = '0');
	return (last_digit);
}
