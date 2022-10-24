#include "main.h"

/**
 * _sqrt_recursion - checks for the perfect square
 * @n: input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (aux(n, (n + 1) / 2));
}

/**
* aux - finds
* @n: input
* @i: counter
* Return: Square
*/

int aux(int n, int i)
{
	if (i < 1)
		return (-1);

	if (i * i == n)
		return (i);
	else
		return (aux(n, i - 1));
}
