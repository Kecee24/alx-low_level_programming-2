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
	int dec;
	dec = '0';

	while (dec <= '9')
	{
		putchar(dec);
		dec++;
	}
	
	printf("\n");

	return (0);
}
