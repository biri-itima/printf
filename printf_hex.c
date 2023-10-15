#include "main.h"

/**
 * printf_hex - prints an hexgecimal number.
 * @arg_list: arguments.
 * Return: counter.
 */
int printf_hex(va_list arg_list)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
