#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void percent_handle(const char *format);
int handle_s(const char *strn);
int handle_c(const int text);
int handle_i(const int i);
int handle_d(const int d);
int _putchar(int c);
int _printf(const char *format, ...);

typedef struct print_lh
{
    char lett;
    int (*function)();
} prt;
int (*get_non_c(char my_char))(va_list);
int print_ld(va_list l);
int print_lx(long int x);
int print_lX(long int x);
int print_lu(va_list u);
int print_lo(va_list o);
int handle_r(const int r);
int handle_d(const int d);
int handle_i(const int i);
int rot13(const char* rot);

#endif
