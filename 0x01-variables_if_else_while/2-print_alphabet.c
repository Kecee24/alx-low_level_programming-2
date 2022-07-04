#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 *main - Entry point
 *
 * return: Always zero (SUCCESS)
 */
int main(void)
{
  char alp;
  
  for (alp = 'a'; alp <= 'z'; alp++)
    putchar(alp);
  
  printf("\n");

  return (0);
}
