#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>

int _printf(const char *format, ...);
int print_char(int c);
int print_str(char *str);
int print_format(char c, va_list args);
int print_unsigned_digit(unsigned long int num);
int print_binary(unsigned int num);
int print_digit(long int num);
int print_hex(unsigned int num, char specifier);
int print_octal(unsigned int num);
#endif
