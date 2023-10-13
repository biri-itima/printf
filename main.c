#include "main.h"
#include <stdio.h>

int main()
{
	int n = 42;
	unsigned int u = 12345;
	void *p = &n;

	printf("Hello, world!\n");
	printf("The answer is %d\n", n);
	printf("The binary representation of %u is %b\n", u, u);
	printf("The octal representation of %u is %o\n", u, u);
	printf("The hexadecimal representation of %u is %x\n", u, u);
	printf("The address of n is %p\n", p);

	return 0;
}