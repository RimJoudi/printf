#include "holberton.h"
/**
 * check_char_func - check depending on separator
 * @s: char
 *@ap: argument of type va_list
 * Return: int
 */
int check_char_func(const char s, va_list ap)
{
	int i = 0;
	printf_t ch[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'r', print_rev_string},
		{0, NULL}
	};
	while (ch[i].c != 0)
	{
		if (ch[i].c == s)
		{
			return (ch[i].fun(ap));
		}
		i++;
	}
	return (0);
}
