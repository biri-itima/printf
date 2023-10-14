#include "main.h"
/**
 * print_format - prints anything
 * @specifier: list of argument types passed to the function
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_format(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(args, long int));
	else if (specifier == 'b')
	count += print_binary(va_arg(args, unsigned int));
	else if (specifier == 'u')
		count += print_unsigned_digit(va_arg(args, unsigned long int));
	else if (specifier == 'x' || specifier == 'X')
	count += print_hex(va_arg(args, unsigned int), specifier);
	else
		count += write(1, &specifier, 1);
	return (count);
}
