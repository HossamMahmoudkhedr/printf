#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - Prints the passed string.
 *
 * @s: The string to be printed.
 *
 * Return: The length of the string.
 */
int print_string(va_list s)
{
char *my_string;
int i = 0;

my_string = va_arg(s, char *);
if (my_string == NULL)
{
my_string = "(null)";
}

while (my_string[i])
{
putchar(my_string[i]);
i++;
}

return (i);
}
