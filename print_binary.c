#include "main.h"
/**
 * print_binary - prints a binary number
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_binary(unsigned int num)
{
	int count = 0, i = 0, j;
	int binary[20];

	if (num == 0)
	{
		count += print_char('0');
		return count;
	}

	while (num != 0)
	{
		binary[i++] = num % 2;
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += print_char(binary[j] + '0');
	}

	return (count);
}