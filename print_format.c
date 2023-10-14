#include "main.h"
/**
 * print_format - prints anything
 * @specifier: list of argument types passed to the function
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_format(char specifier, va_List args)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_int((long)va_arg(args, int), 10);
	else if (specifier == 'b')
		count += print_int((long)va_arg(args, unsigned int), 2);
	else if (specifier == 'u')
		count += print_int((long)va_arg(args, unsigned int), 10);
	else if (specifier == 'o')
		count += print_int((long)va_arg(args, unsigned int), 8);
	else if (specifier == 'x')
		count += print_int((long)va_arg(args, unsigned int), 16);
	else if (specifier == 'X')
		count += print_int((long)va_arg(args, unsigned int), -16);
	else if (specifier == 'S')
		count += print_S(va_arg(args, char *));
	else if (specifier == 'p')
		count += print_pointer(va_arg(args, void *));
	else if (specifier == 'r')
		count += print_rev(va_arg(args, char *));
	else if (specifier == 'R')
		count += print_rot13(va_arg(args, char *));
	else
		count += write(1, &specifier, 1);
	return (count);
}