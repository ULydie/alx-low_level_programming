#include "main.h"
#include <stdlib.h>

/**
 * create_array -create an array of chars
 * @size: the size of array
 * @c: the char to fill in array
 *
 * return:array filled
 */

char *create_array(unsigned int size, char c)
{

	unsigned int a;
	char *s;
	if( size == 0 )
		return ( NULL );
	s = malloc(size * sizeof(char));
	if ( s == NULL )
		return ( NULL );
	for( a = 0; a < size; a++ )
	{

		s[a] = c;

	}

	return (s);

}
