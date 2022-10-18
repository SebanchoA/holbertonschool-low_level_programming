#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	 char *p = s;
	 while (*p);
	 p++;
	 return p-s;
}
