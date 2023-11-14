#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: On success 1.
 * if error, -1 is returned, and set error
 * no accordingly
 */
int _putchar(char c)
{
	return (tmp_store(c));
}

/**
 * tmp_store - Save the character in a tmp_store
 * @c: Char
 * Return: 1
 **/
int tmp_store(char c)
{
	static char caching[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, caching, i);
		i = 0;
	}

	if (c != -1)
		caching[i++] = c;

	return (1);
}
