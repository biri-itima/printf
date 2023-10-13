#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of digits printed.
 */
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_number(num / 10);
	}

	_putchar((num % 10) + '0');
	count++;

	return (count);
}