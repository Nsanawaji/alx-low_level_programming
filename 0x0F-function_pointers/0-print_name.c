#include <stddef.h>

/**
*print_name - function that prints a name
*@name: pointer to a character variable
*@f: function pointer that takes a character pointer as input
*Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
