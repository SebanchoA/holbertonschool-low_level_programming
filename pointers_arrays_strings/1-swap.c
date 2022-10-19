#include "main.h"


/**
 * @a variables with values
 * @b variable
 * swap_int:  swap the variables values.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
