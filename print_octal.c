#include "main.h"
/**
 * print_octal - prints an octal number
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_octal(unsigned int num)
{
	int count = 0, i = 0, j;
	int octal[20];

	if (num == 0)
	{
		count += print_char('0');
		return (count);
	}


	while (num != 0)
	{
		octal[i++] = num % 8;
		num /= 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += print_char(octal[j] + '0');
	}

	return (count);
}