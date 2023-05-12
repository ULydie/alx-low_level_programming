#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int nubm1, nubm2, pro;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nubm1 = atoi(argv[1]);
	nubm2 = atoi(argv[2]);
	pro = nubm1 * nubm2;

	printf("%d\n", pro);

	return (0);
}
