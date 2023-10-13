#include "main.h"

/**
 * print_octal - Prints the octal representation of a number.
 * @n: The number to be printed in octal.
 *
 * Return: The number of digits printed.
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
	{
		count += print_octal(n / 8);
	}

	_putchar((n % 8) + '0');
	count++;

	return (count);
}