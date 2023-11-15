#include "main.h"

/**
 * stdo_rev_string - prints string in reverse order
 * @my_list: list of parameters
 * Return: return length of string
 **/
int  stdo_rev_string(va_list my_list)
{
	int i, str_size;
	const char *str;

	str = va_arg(my_list, const char *);

	str_size = string_length(str);

	for (i = str_size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (str_size);
}
