/*Function that prints the string that receives*/
#include "holberton.h"

/**
 * printf_rot13 - print string
 * @args: arguments
 *
 * Return: number of string ocurrency
 */
int printf_rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0, j, test, counter = 0;

	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *reeplace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0, test = 0; table[j]; j++)
		{
			if (*(s + i) == table[j])
			{
				counter += _putchar(reeplace[j]);
				test = -1;
				break;
			}
			else
			{
				test++;
			}
	}
		if (test == j)
			counter += _putchar(s[i]);
		}

	return (counter);
}
