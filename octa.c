#include "main.h"

/**
* print_lo - print number to octal
* @o: number to print
* Return: number of bytes printed
**/
int print_lo(va_list o)
{
	unsigned long int x = va_arg(o, long int);
	int res, i, j, count = 0;
	char *ptr;
	unsigned long int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 8;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 8;
		x = x / 8;
		ptr[i] = res;
		count++;
	}
	for (; i > 0; i--)
	{
		_putchar('0' + ptr[i - 1]);
	}
	free(ptr);
	return (count);
}

/**
 * handle_r - prints r
 * @r: value to be printed
 *
 * Return: 0
*/
int handle_r(const int r)
{
	if (r)
	{
		_putchar('%');
		_putchar('r');
	}
	return (0);
}
