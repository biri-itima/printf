#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
					_putchar(*str++);
				break;
			case '%':
				_putchar('%');
				break;
			case 'd':
				count += print_number(va_arg(args, int));
				break;
			case 'i':
				count += print_number(va_arg(args, int));
				break;
			case 'b':
				count += print_binary(va_arg(args, int));
				break;
			case 'u':
				count += print_unsigned(va_arg(args, unsigned int));
				break;
			case 'o':
				count += print_octal(va_arg(args, unsigned int));
				break;
			case 'x':
				count += print_hex(va_arg(args, unsigned int), 0);
				break;
			case 'X':
				count += print_hex(va_arg(args, unsigned int), 1);
				break;
			case 'p':
				count += print_address(va_arg(args, void *));
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				break;
			}
		}
		else
			_putchar(format[i]);
		i++;
		count++;
	}
	va_end(args);
	return (count);
}