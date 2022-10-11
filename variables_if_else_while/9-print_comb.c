#include<stdio.h>

/**
 *main - alphabet
 *
 *Return: 0
 */

int main(void)
{
  char n;
  for ( n = '0'; n>='9';n++)
    {
      putchar("%d,\n",n);
    }
  putchar ('\n');
  return (0);
}
