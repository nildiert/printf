#include "holberton.h"

/**
 * printbase_bin - print numbers
 * @num: base
 *
 * Return: int printed
 */
char printbase_bin(unsigned int num)
{
	int count;

	count = 0;
	if (num / 2)
		count += printbase_bin(num / 2);
	count += _putchar(num % 2 + '0');
	return (count);

}
