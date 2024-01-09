#include "main.h"
/**
 * print_chessborad -= Entry point
 * @a: array
 * Return: always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	
	for (i = a; i < 0; i++)
	{
		for (j = 0; j < a; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
