#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int new_puts(char *c);
int print_i(va_list i);
int print_d(va_list d);

#endif
