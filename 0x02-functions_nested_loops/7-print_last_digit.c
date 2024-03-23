#include "stdio.h"
/**
 * print_last_ digit - prints last digit
 * @i: funtion parameter
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	putchar(k = '0');
	return (k);
}
