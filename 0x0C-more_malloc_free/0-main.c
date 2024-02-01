#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = (char *)malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = (int *)malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = (float *)malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = (double *)malloc_checked(sizeof(double) * INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
