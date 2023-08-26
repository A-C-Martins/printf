#include "main.h"

/**
* print_p - print pointer address
* @x: pointer
* Return: number of bytes printed
**/
int print_p(va_list x)
{
	unsigned long n;
	int count = 0;

	n = va_arg(x, unsigned long int);

	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	_putchar('0');
	_putchar('x');
	count = count + print_lx(n) + 2;
	return (count);
}

/**
* print_bin - print number to binary
* @n: number to print
* Return: number of bytes printed
**/
int print_bin(va_list n)
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
		y = y / 2;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 2;
		x = x / 2;
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
* print_S - print non printable characters
* @s: string
* Return: bytes printed
**/
int print_S(va_list s)
{
	unsigned int i, count = 0, aux;
	char *str;

	str = va_arg(s, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			aux = str[i];
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			if (aux > 0 && aux < 16)
			{
				_putchar('0');
				count++;
			}
			count = count + print_lX(aux);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
