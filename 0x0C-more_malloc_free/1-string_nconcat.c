#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
		;
	return (a);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int numb, len, i, j;

	numb = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (numb < 0)
		return (NULL);
	if (numb >= _strlen(s2))
		numb = _strlen(s2);

	len = _strlen(s1) + numb + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < numb; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
