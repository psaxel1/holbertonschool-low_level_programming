#include "main.h"

/**
 * print_numbers -ecirt les chiffre 1 a 9
 *
 **/

void print_most_numbers(void)
{
	 char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch <= '1' || ch == '3' || ch >= '5')
			{
			_putchar (ch);
			}
	}

	_putchar('\n');
}
