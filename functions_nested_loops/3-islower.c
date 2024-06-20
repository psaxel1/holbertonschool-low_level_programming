#include "main.h"

/**
 * _islower -check if char is lower case is it return 1
 *
 * @c: is char
 *
 * Return: 1 if lower, 0 if else
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
