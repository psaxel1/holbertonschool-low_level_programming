#include "main.h"

/**
 * print_sing -print sing of n if po neg or 0
 * @n: number
 * Return: 1 0 -1
 */


int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
