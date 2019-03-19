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
	unsigned int num;

	num = n;
	count = 0;
	if (n < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	if (num / 10)
		count += printnumber(num / 10);

	 count += _putchar(num % 10 + '0');

	return (count);
}
