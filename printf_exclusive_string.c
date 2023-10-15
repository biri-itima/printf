#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @arg: argument.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list arg)
{
	char *str;
	int index, length = 0;
	int cast_value;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] < 32 || str[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			cast_value = str[index];
			if (cast_value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printf_HEX_aux(cast_value);
		}
		else
		{
			_putchar(str[index]);
			length++;
		}
	}
	return (length);
}
