#include <stdio.h>
#include "main.h"

/**
 * printf_dec - function that prints an decimal
 * @d: integer to print
 * Descriptions: prints digit with _putchar
 * Return: size the output text
 */
int print_dec(va_list d)
{
int len, powten, j, digit, n, count = 0, num;

n = va_arg(d, int);
if (n != 0)
{
if (n < 0)
{
putchar('-');
count++;
}
num = n;
len = 0;
while (num != 0)
{
num /= 10;
len++;
}
powten = 1;
for (j = 1; j <= len - 1; j++)
{
powten *= 10;
}
for (j = 1; j <= len; j++)
{
digit = n / powten;
if (n < 0)
{
putchar((digit * -1) + 48);
}
else
{
putchar(digit + '0');
}
count++;
n -= digit * powten;
powten /= 10;
}
}
else
{
putchar('0');
return (1);
}
return (count);
}
