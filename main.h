#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>


void _putchar(char c);
int _printf(const char *format, ...);

/* Specifier converter */
int convert_c(va_list ptr);
int convert_s(va_list ptr);
int convert_d(va_list ptr);

/* Handlers */
int handle_specifier(char c, va_list ptr);

#endif
