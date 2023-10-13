#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
void _putchar(char c);
int print_number(int n);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int print_address(void *p);

#endif