#include "holberton.h"

/**
 * printf_int - print numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int count;

	count = 0;

	if (n / 10)
		count += printnumber(n / 10);

	 count += _putchar(n % 10 + '0');
	return (count);
}
