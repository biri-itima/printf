#include "main.h"
/**
 * printf_string - print a string.
 * @arg: argument.
 * Return: the length of the string.
 */

int printf_string(va_list arg)
{
	char *str;
	int j, length;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
		return (length);
	}
}
