#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Prints the passed character.
 *
 * @c: The character to be printed.
 *
 * Return: Always success (1).
 */
int print_char(va_list c)
{
unsigned int my_char;

my_char = va_arg(c, int);
putchar(my_char);
return (1);
}

/**
 * print_percentage - Prints the percentage mark.
 *
 * Return: Always success (1).
 */
int print_percentage(void)
{
putchar('%');
return (1);
}
