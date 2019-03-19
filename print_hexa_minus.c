#include "holberton.h"

/**
 * printf_hexa - print numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_hexa(va_list args)
{
	int count;
	unsigned int n = va_arg(args, unsigned int);

	count = 0;
	count += print_hexa_minus(n);

	return (count);

}
