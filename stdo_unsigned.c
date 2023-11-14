#include "main.h"

/**
 * stdo_unsigned - print an unsigned integer
 * @my_list: integer to print
 * Return: length of integer
 **/
int stdo_unsigned(va_list my_list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(my_list, unsigned int), 10);

	size = stdo_print((p_buffer != NULL) ? p_buffer : "NULL");

	return (size);
}
