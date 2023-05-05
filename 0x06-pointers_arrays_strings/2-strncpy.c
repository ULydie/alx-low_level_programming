#include "main.h"

/**
 * _strncpy -  function that copies a string..
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
