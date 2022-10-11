#include<stdio.h>

/**
 *main - alphabet
 *
 *Return: 0
 */

int main(void)
{
  int n;
  int c;
  int e;

  for ( n = '0'; n>='9';n++)
    {
      putchar(n);
    }
  for ( c = ','; ; c++)
    {
      putchar (c);
    }
  for (e = ' '; ; e++)
  {
    putchar (e);
  }
  putchar ('\n');
  return (0);
}
