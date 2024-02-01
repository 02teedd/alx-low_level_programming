#include <stdio.h>

int *array_range(int min, int max)
{
	if (min > max)
		return NULL;

	int size = max - min + 1;

	int *arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return NULL;

	for (int i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return arr;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int *a;
	a = array_range(, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
