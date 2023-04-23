#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 *
 * @format: the format for the string to be printed
 * @...: ellipsis
 * Return: the number of characters printed
 */

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;

switch (*format)
{
case 'c':
{
char c = (char)va_arg(args, int);
putchar(c);
count++;
break;
}
case 's':
{
const char *str = va_arg(args, const char *);
while (*str)
{
putchar(*str++);
count++;
}
break;
}
case '%':
{
putchar('%');
count++;
break;
}
default:
return -1;
}
}
else
{
putchar(*format);
count++;
}

format++;
}

va_end(args);

return count;
}
