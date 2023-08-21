#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length(lngh).
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int a;
	int lngh = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		lngh++;
	}
	return (lngh);
}
