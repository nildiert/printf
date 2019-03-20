# _printf
A little printf project

----
## What are Printf Function in C?
see [Printf](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm)

> The C library function int printf(const char *format, ...) sends formatted output to stdout.

----
## usage example

```
int _printf(const char *format, ...)
```

Call the function whit one of these options

* **c** - Character

* **d or i** - Signed decimal integer notation

* **s** - String of characters

* **%** - A '%' is written. No argument is converted. The complete conversion specification is '%%'.

* **o** - unsigned octal notation

* **b** - unsigned binary notation

* **u** - unsigned octal notation

* **x** - unsigned hexadecimal notation (lowercase)

* **X** - unsigned hexadecimal notation (UPPERCASE)

* **r** - reverse string

* **R** - Print string in ROT13 notation'

* **Example:**

```
_printf("%c \n This is a char", 'h');
```

----
