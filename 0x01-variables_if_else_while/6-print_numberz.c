#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*Convert digit to ascii representation*/
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
