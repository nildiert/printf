#include "holberton.h"

/**
 * print_hexa_mayus - function to print digit
 * @n: num
 *
 * Return: void
 */
int print_hexa_mayus(unsigned int n)
{
	int count = 0;
	unsigned int num = n;
	const char hexa[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = hexa[num % 16];
		count++;
		num /= 16;
	} while (num != 0);
	_puts(ptr);

	return (count);
}
