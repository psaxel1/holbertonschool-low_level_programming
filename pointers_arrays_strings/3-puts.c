#include "main.h"
/**
 * _strlen - cree tableur poiteur poite premier case du tableau.
 *	 a l'incrementation change de case
 * @s: is char
 * Return: i
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
	}
	_putchar ('\n');
}
