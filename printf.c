#include "main.h"

int (*l)(va_list);
int j = 0, c;
/**
 * _printf - prints out inputs
 * @format: inputed string
 */

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);

	/* iterating throgh the agument*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/* check on format specifier '%' */
		if (format[i] == '%')
		{
			/* call on percent_handle() */
			percent_handle(format);
			i++;
			/*using switch to check on other formats*/

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
				case 'r':
				    {
						handle_r(va_arg(args, const int));
						break;
					}
				case 'l':
					{
						l = get_non_c(format[i + 1]);
						if (l == NULL)
						{
							write(1, &format[i], 1);
							j++;
						}
						else
						{
							j = j + l(args);
							c++;
						}
						i++;
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
