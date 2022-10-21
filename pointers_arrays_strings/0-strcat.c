#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: Pointer.
 * @src: Pointer.
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *saved = dest;

	while (*dest)
	{
		dest++;
	}
	*dest++ = *src++;
		while (*src != '\0')
		{
			dest++;
			src++;
			*dest = *src;
}
			return (saved);
		
}
