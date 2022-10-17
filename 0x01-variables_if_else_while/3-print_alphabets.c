#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	/* Prints a - z*/
	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}

	/* Prints A-Z*/
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		++ALPH;
	}
		putchar('\n');

	return (0);
}
