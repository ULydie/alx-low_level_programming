#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	separator = (separator != NULL) ? separator : "";

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		if (x > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
	putchar(10);
}
