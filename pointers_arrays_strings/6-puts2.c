#include "main.h"
/**
 * puts2 -print 0 2 4 6 8 10 ...
 *@str: array
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = 0; str[j] > i; j += 2)
	{
		_putchar (str[j]);
	}

	_putchar ('\n');
}
