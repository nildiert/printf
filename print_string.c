/*Function that prints the string that receives*/
#include "holberton.h"

/**
 * printf_string - print string
 * @args: arguments
 *
 * Return: number of string ocurrency
 */
int printf_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
