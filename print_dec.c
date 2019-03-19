#include "holberton.h"

/**
 * printf_dec - print numbers whit separator
 * @args: arguments
 *
 * Return: size of string
 */
int printf_dec(va_list args)
{
	int count;
	int n = va_arg(args, int);

	count = 0;
	if (n / 10)
		count += printnumber(n / 10);

	count += _putchar(n % 10 + '0');
	return (count);
}
