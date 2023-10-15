#include "main.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @arg_list: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list arg_list)
{
	int i, j, count = 0;
	int k = 0;
	char *str = va_arg(arg_list, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(beta[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
