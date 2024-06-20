#include "main.h"

/**
 * print_alphabet -ecirt l'alphabet dans l'ordre a-z
 *
 **/

void print_alphabet(void)
{
	 char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		write(1, &ch, 1);
	}

	_putchar('\n');
}
