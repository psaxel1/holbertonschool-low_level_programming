#include "main.h"
/**
 * more_numbers -print 1 to 14
 *
 */
void more_numbers(void)
{
	int t, num;

	for (t = 0; t <= 9; t++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('0' + num / 10);

			_putchar('0' + num % 10);
		}

		_putchar('\n');
	}
}
