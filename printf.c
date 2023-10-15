#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @fmt: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const fmt, ...)
{
	convert_match matches[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, fmt);
	if (fmt == NULL || (fmt[0] == '%' && fmt[1] == '\0'))
		return (-1);

Here:
	while (fmt[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (matches[j].id[0] == fmt[i] && matches[j].id[1] == fmt[i + 1])
			{
				length += matches[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(fmt[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
