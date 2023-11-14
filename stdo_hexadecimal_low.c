#include "main.h"

/**
 * stdo_hexadecimal_low - print an  hexadecimal number
 * @my_list: integer to print
 * Return: returns length of number
 **/
int stdo_hexadecimal_low(va_list my_list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(my_list, unsigned int), 16);

	size = stdo_print((p_buffer != NULL) ? p_buffer : "NULL");

	return (size);
}
