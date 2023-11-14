#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * stdo_pointer - prints an hexadecimalb number
 * @my_list: integer to stdo_print
 * Return: length of the number
 **/
int stdo_pointer(va_list my_list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(my_list, unsigned long int), 16);

	if (!_strcmp(p_buffer, "0"))
		return (stdo_print("(nil)"));

	size = stdo_print("0x");

	if (!_strcmp(p_buffer, "-1"))
		size = size + stdo_print("ffffffffffffffff");
	else
		size += stdo_print(p_buffer);

	return (size);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}

