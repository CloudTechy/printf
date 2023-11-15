#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

int _printf(const char *format, ...);
int helper(const char *str, va_list my_list);
int stdo_char(va_list my_list);
int stdo_string(va_list my_list);
int percent_helper(const char *, va_list, int *);
int string_length(const char *);
int stdo_print(char *);
int _putchar(char c);
int tmp_store(char c);
char *itoa(long int num, int base);
int stdo_integer(va_list list);
int stdo_binary(va_list my_list);
int stdo_unsigned(va_list my_list);                          
int stdo_octal(va_list my_list);
int stdo_hexadecimal_upp(va_list my_list);
int stdo_hexadecimal_low(va_list my_list);
int stdo_pointer(va_list my_list);
int tmp_store(char);
int stdo_rev_string(va_list my_list);
int stdo_rot(va_list list);
#endif
