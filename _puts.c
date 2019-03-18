/*This file content the _puts function*/
#include "holberton.h"

/**
 * _puts - print string
 * @str: string
 *
 * Return: number of ocurency
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
