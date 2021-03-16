#include "holberton.h"
/**
 * print_rev_string - print reverse string
 *@arg: argument of type va_list
 * Return: count
 */
int print_rev_string(va_list arg)
{
	char *str;
	int i = 0, count = 0, len;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(llun(";
	for (i = 0; str[i]; i++)
		;
	len = i - 1;
	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
		count++;
	}
	return (count);
}
/**
 * print_integer -print number putchar
 * @arg: argument of type va_list
 * Return: count
 */
int print_integer(va_list arg)
{
	int count = 0, rest = 1;
	unsigned int x;
	int n = va_arg(arg, int);

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}
	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}
/**
 * print_rot13 - print rot string
 * @arg: argument of type va_list
 * Return:str
 */
int print_rot13(va_list arg)
{
	char *str = va_arg(arg, char*);
	int i, j, count = 0;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == ch1[j])
			{
				str[i] = ch2[j];
				break;
				_putchar(str[i]);
				count++;
			}
		}
		i++;
	}
	return (i);
}
int binary(unsigned int n);
/**
 * print_binary - print binary
 * @arg: argument of type va_list
 * Return: m
 */
int print_binary(va_list arg)
{
	unsigned int x, m;

	x = va_arg(arg, int);
	m = binary(x);
	return (m);
}
/**
 * binary - print binary
 * @n: unsigned int
 * Return: count
 */
int binary(unsigned int n)
{
	int count = 0;

	if ((n / 2) > 0)
	{
		count = 1 + binary(n / 2);
	}
	putchar('0' + (n % 2));
	return (count);
}
