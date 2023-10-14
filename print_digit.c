#include "main.h"
/**
 * print_digit - prints a digit
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_digit(long int num)
{
	int count = 0;
	int divisor = 1;

	if (num < 0)
	{
		count += print_char('-');
		num = -num;
	}

	if (num == 0)
	{
		count += print_char('0');
		return (count);
	}

	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		int digit = num / divisor;

		count += print_char(digit + '0');
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
