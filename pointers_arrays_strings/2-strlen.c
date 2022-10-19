#include "main.h"

/**
 * _strlen - Lenght of the string
 * @s: Variable that counts
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
