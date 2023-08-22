#include "main.h"

/**
* print_ld - print integers
* @l: integer to print
* Return: number of byte printed
**/
int print_ld(va_list l)
{
	long int i = 1, j, divi = 1, n = va_arg(l, long int), nn = 0;
	unsigned int m = n;
	unsigned int bck = n;

	if (n >= 0 && n <= 9)
		_putchar('0' + n);
	else if (n < 0 && n >= -9)
	{
		n = -n;
		i++;
		_putchar('-');
		_putchar('0' + n);
	}
	else
	{
		if (n <= -10)
		{
			n = -n, nn = 1;
			_putchar('-');
			bck = n;
			m = n;
		}
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
	if (nn == 1)
		return (i + 1);
	return (i);
}

/**
* print_lx - print number to hexa lower
* @x: number to print
* Return: number of bytes printed
**/
int print_lx(long int x)
{
	int res, i, j, count = 0;
	char *ptr;
	unsigned int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 16;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 16;
		x = x / 16;
		if (res > 9 && res < 16)
			ptr[i] = 39 + res;
		else
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
* print_lX - print number to hexa upper
* @x: number to print
* Return: number of bytes printed
**/
int print_lX(long int x)
{
	int res, i, j, count = 0;
	char *ptr;
	unsigned int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 16;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 16;
		x = x / 16;
		if (res > 9 && res < 16)
			ptr[i] = 7 + res;
		else
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
* print_lu - print unsigned integers
* @u: integer to print
* Return: number of byte printed
**/
int print_lu(va_list u)
{
	unsigned long int n = va_arg(u, long int), i = 1, divi = 1, j;
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
