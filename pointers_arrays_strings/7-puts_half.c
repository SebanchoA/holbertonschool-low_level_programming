#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, l = 0, n;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
		n = l/2;
	else
		n = (l - 1)/2;
	for (i = 0; i <= n; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
