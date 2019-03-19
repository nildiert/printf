#include "holberton.h"

/**
 * printf_hexa_mayus - print numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_hexa_mayus(va_list args)
{
	int count;
	unsigned int n = va_arg(args, unsigned int);

	count = 0;
	count += print_hexa_mayus(n);

	return (count);

}
