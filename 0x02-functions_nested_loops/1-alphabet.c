#include "main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar (low);
		low++;

	}
	_putchar ('\n');

}

