#include "main.h"

/**
*_isupper - This checks for uppercase character
*@c: The number to be checked
*Return: 1 for true and 0 for false
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

