#include "main.h"
/**
 * print_str - prints a string
 * @str: va_list containing the string to print
 *
 * Return: number of characters printed
 */
int print_str(char *str) 
{
	int count = 0;

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}