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
	char *ptr = va_arg(args, char *);
	if(!ptr)
		return(_puts("(null)"));
	else
		return (_puts(ptr));
}
