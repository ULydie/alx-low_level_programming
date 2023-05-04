#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int x = 0;
	int lngh;

	for (lngh = 0; s[lngh] != '\0'; lngh++)
	{
	}

	for (x = lngh - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
