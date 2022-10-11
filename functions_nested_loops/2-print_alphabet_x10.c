#include "main.h"

void print_alphabet_x10(void)
{
  int n;
  int r=0;
  do{
  for( n = 'a'; n <= 'z'; n++)
    {
      _putchar(n);
      
    }
  _putchar('\n');
  }while (r<10);
    
}
