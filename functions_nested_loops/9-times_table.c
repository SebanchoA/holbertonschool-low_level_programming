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

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar ((n * m) + '0');
		}
	}
}
