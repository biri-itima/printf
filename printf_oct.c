#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @arg_list: arguments.
 * Return: counter.
 */
int printf_oct(va_list arg_list)
{
	int index;
	int *num_array;
	int counter = 0;
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	num_array = malloc(counter * sizeof(int));

	for (index = 0; index < counter; index++)
	{
		num_array[index] = temp % 8;
		temp /= 8;
	}
	for (index = counter - 1; index >= 0; index--)
	{
		_putchar(num_array[index] + '0');
	}
	free(num_array);
	return (counter);
}
