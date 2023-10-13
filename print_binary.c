#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: The number of digits printed.
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
	{
		count += print_binary(n / 2);
	}

	_putchar((n % 2) + '0');
	count++;

	return (count);
}