#include "main.h"

/**
 * print_reversed_string - function that prints a string in reverse
 * @arguments: type struct va_arg where is allocated printf arguments
 *
 * Return: the length of the string
 */
int printf_srev(va_list arguments)
{

	char *str = va_arg(arguments, char*);
	int index;
	int length = 0;

	if (str == NULL)
		str = "(null)";
	while (str[length] != '\0')
		length++;
	for (index = length - 1; index >= 0; index--)
		_putchar(str[index]);
	return (length);
}
