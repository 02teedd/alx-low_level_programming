#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/*
 * is_digit - check if a string contains a non-digit char
 * @s: string to be evaulated
 * Rteurn: 0 if a nondigit is found and 1 if digit is found
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evalute
 * Return: lenghth of the string
 */
int _strlen(char *s)
{
	int = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handle the main errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return:
 * 0
 */
int main(int argc, char *argv[])
{
	char *sl, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	sl = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s2) || !is_digit(s2))
		error();
	len1 = _strlen(s2);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
		if (!result)
			redsult (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s2[len1] - '0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			putchar(result[i] + '0');
	}
	if (!a)
		putchar('0');
	putchar('\n');
	free(result);
		return (0);
}
