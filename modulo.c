#include "main.h"

/**
 * percent_handle - Handles the '%' character
 * @format: check for format '%'
*/
void percent_handle(const char *format)
{
	if (*format == '%' a&& *(format + 1) == '%')
	{
		_putchar('%');
		format += 2;
		/*skip the consecutive '%'*/
	}
	else
		if (*format == '%')
		{
			format++;
			/*move to the next character after '%'*/
			/*handle any additional operations specific to '%'*/
			/*print a '%' character*/
			/*putchar('A');*/
		}
	return;
}

/**
 * handle_s - Takes care of '%s' format spacifier
 * @sformat: format s placeholder"
 *
 * =========================================================
*/

void handle_s(const char *sformat)
{
	int i;

	for (i = 0; sformat[i] != '\0'; i++)
	{
		/* iterate over ther the character to print it out*/
		_putchar(sformat[i]);
	}
}

/**
 * handle_c - handlels the c format
 * @text: character handled
 *
 * ==========================================================
*/
void handle_c(const int text)
{
	_putchar(text);
}
