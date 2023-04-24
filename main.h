#ifndef _PRINTF_H
#define _PRINTF_H

int _printf(const char *format, ...);
int print_char(va_list c);
int print_percentage(void);
int print_string(va_list s);

typedef struct code_format
{
char *sc;
int (*f)(va_list);
} code_f;
#endif /* _PRINTF_H */
