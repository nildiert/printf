#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct operations - operations for printf
 * @operation: operation name
 * @f: function to call
 *
 * Description: Longer description
 */
typedef struct operations
{
	char *operation;
	int (*f)(va_list args);
} operations_t;
/* this prototype has to be declared in a header file */
int printf_char(va_list args);
int printf_int(va_list args);
int printf_percent(va_list args);
int printf_dec(va_list args);
int printf_bin(va_list args);

char printbase_bin(unsigned int num);
int printnumber(int n);
int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list args);
#endif/* HOLBERTON_H */
