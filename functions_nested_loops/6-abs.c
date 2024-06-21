#include "main.h"

/**
 *_abs -retun how much for go to 0
 * Return: 0
 * @x: number
 */

int _abs(int x)
{

	if (x >= 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	return (0);
}
