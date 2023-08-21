#include "main.h"

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

	/* iterating throgh the agument*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			percent_handle(format);
			i++;

			switch (format[i])
			{
				case 's':
					{
						handle_s(va_arg(args, const char*));
						break;
					}
				case 'c':
					{
						handle_c(va_arg(args, const int));
						break;
					}
				case 'd':
                    			{
                        			handle_d(va_arg(args, const int));
                        			break;
                    			}
				case 'i':
                    			{
                        			handle_i(va_arg(args, const int));
                        			break;
                    			}
				default:
					{
						break;
					}
			}
		}
		else
		{
			/*print non format specifier*/
			_putchar(format[i]);
		}
	}

	va_end(args);
	return (0);
}
