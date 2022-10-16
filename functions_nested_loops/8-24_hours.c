#include "main.h"

/**
 * void
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar('h');
			m++;
		}
		h++;
		m = 0;
	}
}
