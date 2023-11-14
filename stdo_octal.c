#include "main.h"

/**
 * stdo_octal - print an unsigned octal number
 * @my_list: octal number to print
 * Return: length of octal  number
 **/
int stdo_octal(va_list my_list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(my_list, unsigned int), 8);

	size = stdo_print((p_buffer != NULL) ? p_buffer : "NULL");

	return (size);
}
