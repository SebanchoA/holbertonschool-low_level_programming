#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: Pointer.
 * @src: Pointer.
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (saved);
}
