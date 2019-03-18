/* this file while content the protype functions*/
#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
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
#endif/* HOLBERTON_H */
