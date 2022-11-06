#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry Point
*
*@argc: counts the umber of arguments
*
*@argv: array of arguments
*
*Return: Always 0
*/
int main(int argc, char __attribute__((unused))*argv[])
{
	int i, s;

	while (i < argc)
	{
		s = i;
		i++;
	}
	printf("%d\n", s);
	return (0);
}
