#include "main.h"

/**
 * printf_char - prints a char.
 * @arg: arguments.
 * Return: 1.
 */
int printf_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
