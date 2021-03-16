#include "holberton.h"
/**
 * print_character - print a char
 * @arg: argument of type va_list
 * Return: always 1
 */
int print_character(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	_putchar(ch);
	return (1);
}
/**
 *print_string - print a string
 *@arg: argument of type of va_list
 * Return: len
 */
int print_string(va_list arg)
{
	int len = 0;
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
int print_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}
