#include "main.h"
/**
 * print_int - prints an integer
 * @n: integer to be printed
 * @base: base of integer
 *
 * Return: number of characters printed
 */
int print_int(long n, int base)
{
	int count;
	char *symbols = "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_int(-n, base) + 1;)
	}
	else if (n < base)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_int(n / base, base);
		return (count + print_int(n % base, base));
	}
}