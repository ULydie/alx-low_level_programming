#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n:..
 */
void print_binary(unsigned long int n)
{
	int j, cnt = 0;
	unsigned long int crrnt;

	for (j = 63; j >= 0; j--)
	{
		crrnt = n >> j;

		if (crrnt & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
