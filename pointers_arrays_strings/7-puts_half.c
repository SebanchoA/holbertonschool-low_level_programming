#include "main.h"

/**
 * puts_half - Write a function that prints half of a string,
 * @str: pointer
 * Return: 0
 */

void puts_half(char *str)
{
	int i, l = 0, n;

	while (str[l] != '\0')
	{
		l++;
	}

		n = (l / 2);
	if ((l % 2 == 1))
		n = ((l + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
