#include "holberton.h"

/**
 * printf_char - print just character
 * @args: argumentos to print
 *
 * Return: 1
 */
int printf_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
