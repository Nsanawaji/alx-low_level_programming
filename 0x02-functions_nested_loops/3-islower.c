#include "main.h"

/**
*_islower - Checks for lowercase character
*@c: Checks if c is lowercase or not
*Return: success 1, non-success 0
*
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

