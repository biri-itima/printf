#include "main.h"

/**
 * print_address - Prints the memory address of a pointer.
 * @p: The pointer whose address is to be printed.
 *
 * Return: The number of digits printed.
 */
int print_address(void *p)
{
	unsigned long int address = (unsigned long int)p;
	int count = 0;

	if (address / 16)
	{
		count += print_hex(address / 16, 0);
	}

	_putchar(address % 16 < 10 ? address % 16 + '0' : address % 16 - 10 + 'a');
	count++;

	return (count);
}