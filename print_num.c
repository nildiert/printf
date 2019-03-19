#include "holberton.h"

/**
 * printnumber - function to print digit
 * @n: num
 *
 * Return: void
 */
int printnumber(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n == 0)
		count += _putchar('0');

	if (n / 10)
		count += printnumber(n / 10);

	count += _putchar(n % 10 + '0');
	return (count);
}
