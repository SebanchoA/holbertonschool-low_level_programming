#include "main.h"

/**
 * _strcat - Write a function that concatenate the string pointed to by src
 * @dest: Pointer.
 * @src: Pointer.
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
