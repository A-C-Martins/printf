#include "main.h"

/**
* print_hex - print number to hexa lower
* @n: number to print
* Return: number of bytes printed
**/
int print_hex(va_list n)
{
	unsigned int x = va_arg(n, int);
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
* print_HEX - print number to hexa upper
* @n: number to print
* Return: number of bytes printed
**/
int print_HEX(va_list n)
{
	unsigned int x = va_arg(n, int);
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
