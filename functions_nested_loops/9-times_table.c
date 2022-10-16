#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int n;
	int m;
	int t;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar (',');
			_putchar (' ');
			t = (n * m);
			if (t < 10)
				_putchar(' ');
			else
				_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
		}
		_putchar('\n');
	}
}
