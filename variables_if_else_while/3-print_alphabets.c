#include<stdio.h>

/**
 *main - alphabet
 *
 *Return: 0
 */

int main(void)
{
  char ch;
  char chu;

  for (ch = 'a'; ch <= 'z' ; ch++)
    {
      
    putchar (ch);
    }

  for (chu = 'A'; chu <= 'Z' ; chu++)
    {
      putchar (chu);
    }
  putchar ('\n');
  
  return (0);
}
