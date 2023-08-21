#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, vl, verify;

	vl = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		verify = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				vl++;
				verify = 1;
			}
		}
		if (verify == 0)
			return (vl);
	}

	return (vl);
}
