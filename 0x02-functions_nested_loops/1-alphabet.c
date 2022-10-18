#include "main.h"

/**
 * print_alphabet - prints all alphabets in lower case.
 *
 *
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; ++al)
		_putchar(al);
	_putchar('\n');
}
