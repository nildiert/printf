#include "holberton.h"

/**
 * printnumber - function to print digit
 * @n: num
 *
 * Return: void
 */
int printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);

	return (_putchar(n % 10 + '0'));
}
