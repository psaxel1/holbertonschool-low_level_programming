#include "main.h"

/**
 *_isdigit -check if it digit or not
 *@c: is number
 * Return: 1 or 0
 */


int _isdigit(int c)
{
	if (c <= 9)
	{
		return (0);
	}
	else if ( c < 0)
	{
		return (0);
	}

	if (c >= 10)
		return (0);

	return (1);
}
