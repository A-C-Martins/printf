#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct print_st
{
	char type;
	int (*function)();
} print_t;

int _printf(const char *format, ...);
int print_char(va_list x);
int print_string(va_list x);

int _strlen(char *);
int _putchar(char c);
int print_perc(void);
int print_bin(va_list x);
int print_u(va_list x);
int print_oc(va_list n);
int print_hex(va_list n);
int print_HEX(va_list n);
int rot13(va_list x);
int print_rev(va_list x);
int print_S(va_list x);
int print_p(va_list x);
int (*get_print(char type))(va_list);
int handle_d(va_list x);

#endif
