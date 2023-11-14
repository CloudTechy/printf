#include "main.h"

/**
 * stdo_integer - Print a number in base 10
 * @list: Number to print in base 10
 * Return: Length of the numbers in decimal
 **/
int stdo_integer(va_list list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(list, int), 10);

	size = print((p_buffer != NULL) ? p_buffer : "NULL");

	return (size);
}
