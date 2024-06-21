#include "main.h"

/**
 * print_last_digit -print the last dig
 *@n: number
 * Return: 0
 */

int print_last_digit(int n)
{
	int last = n % 10;
	if (last < 0)
	{
		last = -last;
	}
	return (last);
}
