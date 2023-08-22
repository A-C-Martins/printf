#include "main.h"

/**
 * get_non_c - get the correct function
 * @my_char: format specifier
 * Return: pointer to the correct function
 */

int (*get_non_c(char my_char))(va_list)
{
	int i;

	prt opt[] = {
		{'d', print_ld},
		{'i', print_ld},
		{'u', print_lu},
		{'x', print_lx},
		{'X', print_lX},
		{'o', print_lo},
		{'\0', NULL}
	};

	for (i = 0; opt[i].lett; i++)
	{
		if (my_char == opt[i].lett)
		{
			return (opt[i].function);
		}
	}
	return (NULL);
}
