#include "main.h"

/**
 * rot13 - encodes string with rot13.
 * @s: String text
 * Return: encoded string
 */
int rot13(char *s)
{
	int i, j;
	char *letters, *rot13;

	letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!letters[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * stdo_rot - prints encoded rot  string
 * @my_list: String text
 * Return: Length of encoded string
 **/
int stdo_rot(va_list my_list)
{
	char *p;
	int ptr_len;

	p = va_arg(my_list, char *);
	ptr_len = rot13((p != NULL) ? p : "(ahyy)");

	return (ptr_len);
}
