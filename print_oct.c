#include "holberton.h"

/**
 * printf_oct - print numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_oct(va_list args)
{
	int count;
	unsigned int n = va_arg(args, int);

	count = 0;
	count += printnumberoctal(n);

	return (count);

}
