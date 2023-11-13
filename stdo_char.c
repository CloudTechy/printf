#include "main.h"
/**
 * stdo_char - print character
 * @my_list: va_list.
 * Return: 1
 */
int stdo_char(va_list my_list)
{
	int tmp;

	tmp = va_arg(my_list, int);

	_putchar(tmp);

	return (1);
}

