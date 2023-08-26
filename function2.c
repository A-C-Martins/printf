#include "main.h"

/**
* handle_p - print pointer address
* @p: pointer
* Return: number of bytes printed
**/
int handle_p(const unsigned long p)
{
	unsigned long n;
	int count = 0;

	n = p;

	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	_putchar('0');
	_putchar('x');
	count = count + print_lX(n) + 2;
	return (count);
}

int print_int(va_list x)
{
	int i = 1, j, divi = 1, n = va_arg(x, int), nn = 0;
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
