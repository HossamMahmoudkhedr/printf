#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int printf_string(va_list s)
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
