#include "main.h"

/**
 * stdo_binary - function that prints a number in base 2
 * @my_list: Number to print in base 2
 * Return: return binary length
 **/
int stdo_binary(va_list my_list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(my_list, unsigned int), 2);

	size = stdo_print(p_buffer);

	return (size);
}
