#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array
 * @a: pointer
 * @n: variable
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
printf("\n");
}
