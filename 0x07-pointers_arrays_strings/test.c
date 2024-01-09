#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "hellome";
	char *y = "oleh";
	unsigned int n;

	n = strspn(s, y);
	printf("%u\n", n);

}
