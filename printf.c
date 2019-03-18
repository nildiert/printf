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
		{"i", printf_int},
		{"s", printf_string},
		{"%", printf_percent},
		{NULL, NULL}};

	int j, i = 0, counter = 0, diff = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			counter += _putchar(format[i]);
			i++;
		}
		if (format[i] != '\0' && format[i + 1] != '\0')
			i++;
		else
			break;
		for (j = 0; types[j].operation; j++)
		{
			if (*(types[j].operation) == format[i])
				counter += types[j].f(args);
			else
				diff++; }
		if (diff == j)
		{ counter += _putchar('%');
			counter += _putchar(format[i]); }
		diff = 0; }
	va_end(args);
	return (counter);
}
