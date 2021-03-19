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
	char *str;
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch1[j])
			{
				_putchar(ch2[j]);
				break;
			}
		}
		if (j == 53)
		_putchar(str[i]);
	}
	return (i);
}
/**
 * print_binary - print binary
 * @arg: argument of type va_list
 * Return: count
 */
int print_binary(va_list arg)
{
	unsigned int x, y, i, sum;
	unsigned int a[32];
	int count;

	x = va_arg(arg, unsigned int);
	y = 2147483648;
	a[0] = x / y;
	for (i = 1; i < 32; i++)
	{
		y /= 2;
		a[i] = (x / y) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum = sum + a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
