#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @orgc: Number of argments
 * @argv: Array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int count, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
