#include "holberton.h"

/**
 * printf_int - print numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_int(va_list args)
{
	int count;
	int n = va_arg(args, int);

	count = 0;
	count += printnumber(n);

	return (count);

}
