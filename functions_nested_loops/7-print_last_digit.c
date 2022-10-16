#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int m;

	m = (r % 10);

	if (r < 0)
	{
		m = (-1 * m);
	}

	_putchar(m + '0');
	return (m);
}
