#include "main.h"

/**
 * main - Entry point
 *
 * Description: print lowercase letters using _putchar
 *
 * Return: 0
 *
 */
int main(void)
{
	char al = 'a';
	
	while (al <= 'z')
	{
		_putchar(al);
		++al;
	}
	_putchar('\n');
	return (0);
}
