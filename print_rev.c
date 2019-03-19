/*Function that prints the string that receives*/
#include "holberton.h"

/**
 * printf_rev - print string
 * @args: arguments
 *
 * Return: number of string ocurrency
 */
int printf_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	for (j = i; j > 0; j--)
	{
		s--;
		_putchar(*s);
	}
	return (i);
}
