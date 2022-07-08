#include "main.h"
/**
 * _isupper - Entry point
 * @c: is int
 * Return: 1 if isupper and 0 if its lower
 */
int _isupper(int c)
{
	if (c >= 'Z' && c <= 'Z')
		return (1);
	else
		return (0);
}
