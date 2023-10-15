#include "main.h"
/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int num1 = va_arg(args, unsigned int);
	int num2, last_digit = num1 % 10, digit, exp = 1;
	int  count = 1;

	num1 = num1 / 10;
	num2 = num1;

	if (last_digit < 0)
	{
		_putchar('-');
		num2 = -num2;
		num1 = -num1;
		last_digit = -last_digit;
		count++;
	}
	if (num2 > 0)
	{
		while (num2 / 10 != 0)
		{
			exp = exp * 10;
			num2 = num2 / 10;
		}
		num2 = num1;
		while (exp > 0)
		{
			digit = num2 / exp;
			_putchar(digit + '0');
			num2 = num2 - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(last_digit + '0');

	return (count);
}
