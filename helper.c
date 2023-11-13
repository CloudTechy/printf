#include "main.h"

/**
 * helper - Format managers
 * @str: String format
 * @my_list: List of variable arguments
 * Return: Total char_count of arguments with the total
 * char_count of the base string
 **/
int helper(const char *str, va_list my_list)
{
	int char_count, i, tmp;

	char_count = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			tmp = percent_helper(str, my_list, &i);
			if (tmp == -1)
				return (-1);

			char_count += tmp;
			continue;
		}

		_putchar(str[i]);
		char_count = char_count + 1;
	}


	return (char_count);
}

/**
 * percent_helper - Manages percent specifier
 * @str: String format
 * @my_list: List of variable arguments passed in
 * @i: Iterator
 * Return: Size of the numbers of characters printed
 **/
int percent_helper(const char *str, va_list my_list, int *i)
{
	int char_count, j, number_formats;
	format formats[] = {
		{'s', stdo_string}, {'c', stdo_char}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = char_countof(formats) / char_countof(formats[0]);
	for (char_count = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			char_count = formats[j].f(my_list);
			return (char_count);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}


/**
 * string_length - To compute the length of string
 * @str: String
 * Return: return length
 **/
int string_length(const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;

	return (i);
}

/**
 *stdo_print - print char.
 * @str: string.
 * Return: string length.
 */

int stdo_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
