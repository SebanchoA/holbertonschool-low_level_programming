#include "main.h"


/**
 * 
 * @a, @b - variables with values
 * swap_int - swap the variables values.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
