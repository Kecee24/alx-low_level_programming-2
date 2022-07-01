#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	  {
	  printf("\t%d is positive\n", n);
	  }
	else
	  {
	  if (n == 0)
	    printf("\t%d is zero\n", n);
	  else
	    printf("\t%d is negative\n", n);
	  }
	return (0);
}
