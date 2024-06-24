#include "main.h"

/**
 * print_diagonal- print diagonal
 * @n: number
 */

void print_diagonal(int n)
{
	int w, s;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (w = 0 ; w < n; w++)
	{
		for (s = 0; s < w; s++)
	{

		_putchar(' ');
	}

		_putchar('\\');
		_putchar('\n');
	}
}
