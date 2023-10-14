#include "main.h"
/**
 * print_digit - prints a digit
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_digit(long int num)
{
	int count = 0, i = 0, j;
	int digits[20];

	if (num < 0)
	{
		count += print_char('-');
		num = -num;
	}

	if (num == 0)
	{
		count += print_char('0');
		return count;
	}

	while (num != 0)
	{
		digits[i++] = num % 10;
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += print_char(digits[j] + '0');
	}

	return (count);
}