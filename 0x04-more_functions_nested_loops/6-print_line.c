#include "main.h"

/**
*print_line - function that prints line
*@n: specifies length of line
*Return: 0
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
