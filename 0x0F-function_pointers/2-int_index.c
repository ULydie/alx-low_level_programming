#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -function prototype
 * @size:size of array
 * @array:array with data
 * @cmp:pointer to function
 *
 * Return:first index of an element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
