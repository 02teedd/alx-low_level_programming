#include <stdio.h>

__attribute__((constructor)) void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
