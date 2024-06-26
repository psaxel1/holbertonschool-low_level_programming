#include "main.h"
/**
 * _puts -print all the array
 * @str: is array
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
	}
	_putchar ('\n');
}
