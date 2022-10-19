#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string
 * @str: pointer or string
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i == 0 || i % 2 == 0)
			_putchar (str[i]);
	_putchar('\n');
}
