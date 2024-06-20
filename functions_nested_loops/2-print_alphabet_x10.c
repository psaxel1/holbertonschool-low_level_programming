#include "main.h"

/**
 * print_alphabet -ecirt l'alphabet dans l'ordre a-z
 *
 **/

void print_alphabet_x10(void)
{
	 char i, ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			write(1, &ch, 1);
		}
	_putchar('\n');
	}

	_putchar('\n');
}
