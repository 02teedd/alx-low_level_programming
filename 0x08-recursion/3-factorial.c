#include "main.h"

/**
 * factorial: calculates a factorial of a non-negative integer.
 * @n: The non_negative integer for to calculate the factorial.
 *
 * Return: the factorial of n, or -1 if n is negative.
 *
 * Description:
 * this fuction computes the factorial of a given non-negative integer 'n'
 * the factorial of a non genative integer 'n' is the product of all positive
 * integers less than or equal to 'n'. The base case is 'n = 0' in which case
 * the factorial is 1. Otherwise, the function recursively calculates the
 * factorial if 'n -1' and multiplies it by 'n', this process continues until
 * the base case is reached
 *
 * if 'n' is negative, the function returns -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
