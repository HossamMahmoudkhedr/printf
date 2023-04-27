#include <stdarg.h>
#ifndef _PRINTF_H
#define _PRINTF_H


typedef struct code_format
{
char *sc;
int (*f)(va_list);
} code_f;

int _printf(const char *format, ...);
int print_char(va_list c);
int print_percentage(void);
int print_string(va_list s);
int print_dec(va_list d);
int print_int(va_list i);
int (*find_function(const char *format))(va_list);
#endif /* _PRINTF_H */
