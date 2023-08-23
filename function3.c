#include "main.h"

/**
* print_u - print unsigned integers
* @x: integer to print
* Return: number of byte printed
**/
int print_u(const unsigned int x)
{
	unsigned int n = x, i = 1, divi = 1, j;
	unsigned int m = n;
	unsigned int bck = n;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	if (n >= 1 && n <= 9)
		_putchar('0' + n);
	else
	{
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		for (j = i; j > 1; j--)
			divi = divi * 10;
		for (j = 1; j <= i; j++)
		{
			m = bck / divi;
			bck = bck - (m * divi);
			divi = divi / 10;
			_putchar('0' + m);
		}
	}
	return (i);
}

/**
* print_oct - print number to octal
* @n: number to print
* Return: number of bytes printed
**/
int print_oct(const int n)
{
	unsigned int x = n;
	int res, i, j, count = 0;
	char *ptr;
	unsigned int  y = x;

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
