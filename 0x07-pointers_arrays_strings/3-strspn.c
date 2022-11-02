#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring.
*@s: character pointer
*@accept: Second string
* Return: An int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n;
	int j;

	for (i = 0; i < s[n]; i++)
	{
		int f;
		for (j = 0; j < accept[f]; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
		if (s[i] == accept[j])
			return (s[i]);
	}
}
