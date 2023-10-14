#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_char(int c);
int print_int(long n, int base);
int print_str(char *str);

#endif
