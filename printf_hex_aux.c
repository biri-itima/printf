#include "main.h"

/**
 * printf_hex_aux - prints an hexgecimal number.
 * @hex_num: hexadecimal number to be printed.
 * Return: number of digits printed.
 */
int printf_hex_aux(unsigned long int hex_num)
{
	long int i;
	long int *num_array;
	long int counter = 0;
	unsigned long int temp = hex_num;

	while (hex_num / 16 != 0)
	{
		hex_num /= 16;
		counter++;
	}
	counter++;
	num_array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		num_array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (num_array[i] > 9)
			num_array[i] = num_array[i] + 39;
		_putchar(num_array[i] + '0');
	}
	free(num_array);
	return (counter);
}
