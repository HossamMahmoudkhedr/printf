#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * printf_char - prints a character
 *
 * @c: the character to be printed
 * Return: 1
 */

int printf_char(va_list c)
{
unsigned int my_char;
my_char = va_arg(c, int);
putchar(my_char);
return (1);
}

/**
 * print_percentage - prints the percentage mark
 *
 * Return: 1
 */
int print_percentage(void)
{
putchar('%');
return (1);
}
