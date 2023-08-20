#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void percent_handle(const char *format);
void handle_s(const char *sformat);
void handle_c(const int text);
/*#define str va_arg(args, const char *)*/
int _putchar(char c);

#endif
