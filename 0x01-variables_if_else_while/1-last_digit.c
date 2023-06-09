#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	y = x % 10;

	if (y > 5)
		printf("Last digit of %i is %i and is greater than 5\n",
		       x, y);
	else if (y == 0)
		printf("Last digit of %i is %i and is 0\n", x, y);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       x, y);

	return (0);
}
