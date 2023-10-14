#include "main.h"
/**
 * print_hex - prints a hexadecimal number
 * @num: number to be printed
 * @specifier: format specifier
 * Return: number of characters printed
 */
int print_hex(unsigned int num, char specifier)
{
	char hex_digits[] = "0123456789abcdef";
	char hex[20];
	int i = 0, count = 0, j;

	if (num == 0)
	{
		count += print_char('0');
		return count;
	}

	while (num != 0)
	{
		hex[i++] = hex_digits[num % 16];
		num /= 16;
	}

	if (specifier == 'x' || specifier == 'X')
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (specifier == 'x')
				count += print_char(hex[j]);
			else
				count += print_char(toupper(hex[j]));
		}
	}

	return count;
}