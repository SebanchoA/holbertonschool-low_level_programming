#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;
	len = strlen(s);
	return (len);
}

void print_rev(char *s)
{
	int i;
	int len;
	
	len = _strlen(s);

	for (i = len-1; i > 0;i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
