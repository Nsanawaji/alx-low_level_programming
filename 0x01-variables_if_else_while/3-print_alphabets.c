#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char alph;

	while (alph <= 'z')
	{
		alph++;
		putchar(alph);
	}
	return (0);
	while (alph <= 'Z')
	{
		alph++;
		putchar(alph);
		putchar('\n');
	}
	return (0);
}
