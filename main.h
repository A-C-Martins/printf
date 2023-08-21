#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
void percent_handle(const char *format);
int handle_s(const char *strn);
int handle_c(const int text);
int print_int(va_list x);
/*#define str va_arg(args, const char *)*/
int _putchar(char c);

#endif
