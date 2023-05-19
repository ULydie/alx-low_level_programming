#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cnct;
	unsigned int ln = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		ln++;

	cnct = malloc(sizeof(char) * (ln + 1));

	if (cnct == NULL)
		return (NULL);

	ln = 0;

	for (index = 0; s1[index]; index++)
		cnct[ln++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		cnct[ln++] = s2[index];

	cnct[ln] = '\0';

	return (cnct);
}
