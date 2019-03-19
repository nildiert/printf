#include "holberton.h"

/**
 * printf_bin - print binary numbers
 * @args: argumentos
 *
 * Return: int printed
 */
int printf_bin(va_list args)
{
	int count;
	unsigned int n = va_arg(args, int);

	count = 0;
	count += printbase_bin(n);

	return (count);

}
