#include "main.h"
#include <stdio.h>
/**
 * main - print fizz buzz
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num <= 9)
		{
			putchar('0' + num % 10);
			putchar(' ');
		}
		else
		{
			putchar ('0' + num / 10);
			putchar ('0' + num % 10);
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
