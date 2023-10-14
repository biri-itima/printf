#include "main.h"
/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: number of characters printed
 */
void print_char(int c) 
{
   return write(1, &c, 1);
}