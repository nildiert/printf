#include "holberton.h"

/**
 * printf_unsi - print numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_unsi(va_list args)
{
	int count;
	unsigned int n = va_arg(args, int);

	count = 0;
	count += printnumberunsi(n);

	return (count);
}
