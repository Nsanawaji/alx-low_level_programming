#include "main.h"

/**
*_strlen - Functions that returns the length of a string
*@s: Variable
*Return: 0 on success
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
