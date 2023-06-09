#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (array != NULL && action != NULL)
		for (a = 0; a < (int) size; a++)
		{
			action(array[a]);
		}
}
