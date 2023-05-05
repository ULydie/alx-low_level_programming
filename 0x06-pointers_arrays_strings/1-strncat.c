#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int b = 0;

	while (b < n && *src)
	{
		dest[index + b] = *src;
		src++;
		b++;
	}
	dest[index + b] = '\0';
	return (dest);
}
