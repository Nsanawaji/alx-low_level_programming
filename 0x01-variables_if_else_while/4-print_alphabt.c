#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al == 'q' || al == 'e')
			++al;
		putchar(al);
		++al;
	}
	putchar('\n');

	return (0);
}
