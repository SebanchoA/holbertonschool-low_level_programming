#include "main.h"

void print_alphabet_x10(void)
{
  int n;
  int r;
  for (r=0 ; r < 10; r++)
    {
  for( n = 'a'; n <= 'z'; n++)
    {
      _putchar(n);
      
    }
  _putchar('\n');
    }
    
}
