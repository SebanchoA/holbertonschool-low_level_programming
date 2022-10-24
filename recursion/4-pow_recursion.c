#include "main.h"

/**
 *
 *
 */

int _pow_recursion(int x, int y)
{

	if(x == 0 || y == 0)
		return(1);
	if(y < 0)
		return(-1);
	return(x * _pow_recursion(xs, y-1));
			}
