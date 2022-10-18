#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */

void rev_string(char *s)
{
	int i, l, temp;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l/2; i++)
	{
		temp = s[i];
		s[i] = s[l-1-i];
		s[l-i-1] = temp;
	}
}
