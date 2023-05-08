#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *str, char str_b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		str[i] = str_b;
	return (str);
}
