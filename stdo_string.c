#include "main.h"

/**
 * stdo_string - Print string
 * @my_list: my_list.
 * Return: String length.
 */

int stdo_string(va_list my_list)
{
	char *ptr;
	int ptr_len;

	ptr = va_arg(my_list, char*);
	ptr_len = stdo_print((ptr != NULL) ? ptr : "(null)");

	return (ptr_len);
}
