#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int char_count;
	va_list var_args;

	if (format == NULL)
		return (-1);

	char_count = _strlen(format);
	if (char_count <= 0)
		return (0);

	va_start(var_args, format);
	char_count = helper(format, var_args);

	_putchar(-1);
	va_end(var_args);

	return (char_count);
}
