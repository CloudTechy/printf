#include "main.h"

int is_lower(char);
char *str_to_upper(char *);

/**
 * stdo_hexadecimal_upp - print a hexadecimal number
 * @my_list: integer to print
 * Return: number length
 **/
int stdo_hexadecimal_upp(va_list my_list)
{
	char *p_buffer;
	int size;

	p_buffer = itoa(va_arg(my_list, unsigned int), 16);
	p_buffer = str_to_upper(p_buffer);

	size = stdo_print((p_buffer != NULL) ? p_buffer : "NULL");

	return (size);
}

/**
 * is_lower - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * str_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *str_to_upper(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		if (is_lower(s[i]))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
