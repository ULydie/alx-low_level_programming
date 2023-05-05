#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int j;
	int c;

	j = 0;
	while (j < n)
	{
		n--;
		c = a[j];
		a[j] = a[n];
		a[n] = c;
		j++;
	}
}
