#include "main.h"

/**
*_isalpha - Checks for alphabetic character
*@c: Check if c is lowercase or uppercase
*Return: successful 1, not successful 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
