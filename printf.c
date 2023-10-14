#include "main.h"
/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, args);
			format++;
		}
		else
		{
			write(1, format, 1);
			++format;
			++count;
		}
	}
	va_end(args);
	return (count);
}
