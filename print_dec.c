#include "holberton.h"

/**
 * printf_dec - print numbers whit separator
 * @args: arguments
 *
 * Return: size of string
 */
int printf_dec(va_list args)
{
	int n = va_arg(args, int);

	return (_putchar(n % 10 + '0'));
}
