#include "holberton.h"

/**
 * printnumberunsi - print numbers
 * @n: argumentos
 *
 * Return: int printed
 */
int printnumberunsi(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += printnumberunsi(n / 10);

	return (count += _putchar(n % 10 + '0'));
}
