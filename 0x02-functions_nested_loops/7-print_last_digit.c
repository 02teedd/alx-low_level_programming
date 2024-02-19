#include "stdio.h"
/**
 * print_last_ - prints last digit
 * @i: funtion parameter
 * return: k
 */

int print_last_digit(int n)
{
	int last_digits
	if (n < 0)
	{
		n = -n;
	}
	
	int print last_digit = n % 10;

	putchar('0' + last_digit);
	return last_digit;
}
