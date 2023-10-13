#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @n: The unsigned integer to be printed.
 *
 * Return: The number of digits printed.
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += print_unsigned(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;

	return (count);
}