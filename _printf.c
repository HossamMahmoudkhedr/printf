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

int _printf(const char *format, ...)
{
int i, j, len, special;
char *value;
special = 0;
va_list arg;

len = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
{
special++;
}
len++;
}

if (special > 0)
{
newOutput = (char *)malloc(len + 1);
if (newOutput == NULL)
{
return -1;
}

va_start(arg, special);

j = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
value = va_arg(arg, char *);
newOutput[j] = *value;
j++;
break;
case 's':
value = va_arg(arg, char *);
while (*value != '\0')
{
newOutput[j] = *value;
j++;
value++;
}
break;
case '%':
newOutput[j] = '%';
j++;
break;
default:
free(newOutput);
return -1;
}
}
else
{
newOutput[j] = format[i];
j++;
}
}

va_end(arg);

if (write(1, newOutput, j) == -1)
{
free(newOutput);
return -1;
}

free(newOutput);

return j;
}
else
{
if (write(1, format, len) == -1)
{
return -1;
}
return len;
}
}
