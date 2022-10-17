#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char rev = 'z';

	/*Print the alphabet in reverse*/

	while (rev >= 'a')
	{
		putchar(rev);
		--rev;
	}
	putchar('\n');

	return (0);
}
