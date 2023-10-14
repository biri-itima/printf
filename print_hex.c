#include "main.h"
/**
 * print_hex - Prints the hexadecimal representation of a number.
 * @n: The number to be printed.
 *
 * Return: The number of digits printed.
 */
int print_hex(unsigned int n, int uppercase)
{
	char buffer[20];
	int count = 0;

	_putchar('0');
	uppercase ? _putchar('X') : _putchar('x');
	count += 2;

	do
	{
		int digit = n % 16;
		if (digit < 10)
		{
			buffer[count++] = digit + '0';
		}
		else
		{
			buffer[count++] = (uppercase ? 'A' : 'a') + digit - 10;
		}
		n /= 16;
	} while (n > 0);

	for (int i = count - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (count); // add 2 to the count for the '0x' prefix
}