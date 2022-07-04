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
	int rec;

	dec = '0';
	rec = '9';

	while (dec <= rec)
	{
		putchar(dec);
		dec++;
	}
	printf("\n");

	return (0);
}
