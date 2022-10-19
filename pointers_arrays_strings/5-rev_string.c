#include "main.h"

/**
 * rev_string - a function that reverse string
 * @s: pointer
 * Return: 0.
 */

void rev_string(char *s)
{
	int i, l, temp;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - i - 1] = temp;
	}
}
