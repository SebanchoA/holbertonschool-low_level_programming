#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: Pointer.
 * @src: Pointer.
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
{
if (src[i] == '\0')
	dest[i] = '\0';
}
return (dest);
}
