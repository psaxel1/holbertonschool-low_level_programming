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
		return (1);
	}
	else if ( c < 0)
	{
		return (1);
	}

	return (0);
}
