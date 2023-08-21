#include "main.h"

/**
 * percent_handle - Handles the '%' character
 * @format: check for format '%'
*/
void percent_handle(const char *format)
{
	if (*format == '%' && *(format + 1) == '%')
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
}

/**
 * handle_s - Takes care of '%s' format spacifier
 * @strn: format s placeholder"
 *
 * =========================================================
*/
int handle_s(const char *strn)
{
	/*va_list str;*/
	int i;
	/*char *strn;*/
	if (strn == NULL)
	{
		strn = "(null)";
	}

	for (i = 0; strn[i]; i++)
	{
		/* iterate over ther the character to print it out*/
		_putchar(strn[i]);
	}
	return (i);
}

/**
 * handle_c - handlels the c format
 * @text: character handled
 *
 * ==========================================================
*/
int handle_c(const int text)
{
	write(1, &text, 1);
	return (1);
}
