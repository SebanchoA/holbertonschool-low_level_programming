#include "main.h"

/**
 * void
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar (h / 10);
			_putchar (h % 10);
			_putchar (':');
			_putchar (m / 10);
			_putchar (m % 10);
		}
	}
}
