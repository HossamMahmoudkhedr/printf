#ifndef _PRINTF_H
#define _PRINTF_H

int _printf(const char *format, ...);
int printf_char(va_list c);
int print_percentage(void);
int printf_string(va_list s);
int printf_int(va_list i);

typedef struct code_format
{
char *sc;
int (*f)(va_list);
} code_f;
#endif /* _PRINTF_H */
