#include "main.h"

/**
 * print_rev Write a function that prints a string, in reverse
 * @s: pointer.
 * Return: 0.
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
