#include "main.h"

/**
 * printf_HEX_aux - prints an hexgecimal number.
 * @hex_num: number to print.
 * Return: counter.
 */
int printf_HEX_aux(unsigned int hex_num)
{
	int i;
	int *hex_array;
	int counter = 0;
	unsigned int temp = hex_num;

	while (hex_num / 16 != 0)
	{
		hex_num /= 16;
		counter++;
	}
	counter++;
	hex_array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		hex_array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (hex_array[i] > 9)
			hex_array[i] = hex_array[i] + 7;
		_putchar(hex_array[i] + '0');
	}
	free(hex_array);
	return (counter);
}
