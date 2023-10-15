#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int printf_pointer(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int num;
	int count;
	int i;

	ptr = va_arg(arg, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	num = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	count = printf_hex_aux(num);
	return (count + 2);
}
