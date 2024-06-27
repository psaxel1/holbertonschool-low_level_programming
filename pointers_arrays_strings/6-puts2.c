#include "main.h"
/**
 * puts2 -print 0 2 4 6 8 10 ...
 *@str: array
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
		str++;
	}
}
