/*this file while content the printf project*/
#include "holberton.h"

/**
 * _printf - printf function
 * @format: format arguments to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	operations_t types[] = {
		{"c", printf_char},
		{NULL, NULL}};
	return (0);
}
