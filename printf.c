#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints out inputs
 * @format: inputed string
 *
 * Return: 0 success
 */

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);

    int i = 0; // To keep track of characters printed

    for (const char *c = format; *c != '\0'; ++c) 
    {
        if (*c == '%') 
	{
            ++c; // Move past '%'
            switch (*c) 
	    {
                case 'd': 
		{
                    // Handle integer format
                    int int_arg = va_arg(args, int);
                    i += printf("%d", int_arg);
                    break;
                }
                case 's': 
		{
                    // Handle string format
                    char *str_arg = va_arg(args, char *);
                    i += printf("%s", str_arg);
                    break;
                }
                case 'c': 
		{
                    // Handle character format
                    int char_arg = va_arg(args, int);
                    i += putchar(char_arg);
                    break;
                }
                default:
                    // Just print the character after '%'
                    i += putchar(*c);
                    break;
            }
        } 
	else 
	{
            i += putchar(*c);
        }
    }

    va_end(args);
	return (i);
}
