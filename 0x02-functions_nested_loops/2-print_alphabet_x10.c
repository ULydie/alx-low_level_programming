#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
int x = 0;
while (x < 10)
{
char y = 'a';
while (y <= 'z')
{
_putchar(y);
y++;
}
_putchar('\n');
x++;
}
}

