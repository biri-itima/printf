#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: Type char pointer
 * Return: count.
 */
int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != 0; count++)
		;
	return (count);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer str
 * @str: Type char pointer
 * Return: count
 */
int _strlenc(const char *str)
{
	int count;

	for (count = 0; str[count] != 0; count++)
		;
	return (count);
}
