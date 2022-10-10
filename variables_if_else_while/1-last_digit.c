#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
  int n, lastDigit;
  
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;
  if ( n > 5)
    printf ( "Last digit of\n", n, "is\n", lastDigit, "and is greater that 5\n");
      
  else
    if (n < 6 && n != 0)
      printf ("Last digit of\n", n, "is\n", lastDigit, "and is less that 6 and not 0");
    else
      if (n==0)
	printf ("Last digit of\n", n, "is\n", lastDigit, "and is 0\n");
  return (0);
}
