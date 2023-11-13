#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int helper(const char *str, va_list my_list);
int stdo_char(va_list my_list);
int stdo_string(va_list my_list);
int percent_helper(const char *, va_list, int *);
int _strlen(const char *);
int stdo_print(char *);
char *itoa(long int, int);
#endif
