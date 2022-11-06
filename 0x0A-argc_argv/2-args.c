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
int main(int __attribute__((unused))argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
