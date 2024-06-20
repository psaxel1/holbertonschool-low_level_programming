#include "main.h"

/**
 * _isalpha -check if char is lower or upper case is it return 1
 *
 *
 * @c: is char
 *
 * Return: 1 if lower or upper, 0 if else
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
