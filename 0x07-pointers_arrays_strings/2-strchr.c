#include "main.h"

/**
*_strchr - function that locates a character in a string.
*@s: pointer
*@c: char variable
*Return: character pointer
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
