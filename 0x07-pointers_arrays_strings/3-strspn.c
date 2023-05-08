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

	for (i = 0; str[i] != '\0'; i++)
	{
		verify = 0;

		for (n = 0; acc[n] != '\0'; n++)
		{
			if (acc[n] == str[i])
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
