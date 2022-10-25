#include "main.h"

/**
*swap_int - function that swaps the value of integers
*@a: First integer
*@b: Second integer
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
