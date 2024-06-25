#include "main.h"

/**
 * print_square -function to print a square
 * @size: number
 */

void print_square(int size)
{
	int idx1, idx2;

	for (idx1 = 0; idx1 < size; idx1++)
	{
		for (idx2 = 0; idx2 < size; idx2++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}
