#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: string.
 */
char *cap_string(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if ((s[j - 1] == ' ' || s[j - 1] == '\n'
		|| s[j - 1] == '\t' || s[j - 1] == ','
		|| s[j - 1] == ';' || s[j - 1] == '!'
		|| s[j - 1] == '?' || s[j - 1] == '"'
		|| s[j - 1] == '(' || s[j - 1] == ')'
		|| s[j - 1] == '{' || s[j - 1] == '}'
		|| s[j - 1] == '.')
		&& (s[j] >= 'a' && s[j] <= 'z'))
		{
			s[j] = s[j] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[j] = s[j];
		}
		j++;
	}
	return (s);
}
