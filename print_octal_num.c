#include "holberton.h"

/**
 * printnumberoctal - function to print digit
 * @n: num
 *
 * Return: void
 */
int printnumberoctal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += printnumberoctal(n / 8);

	return (count += _putchar(n % 8 + '0'));

}
