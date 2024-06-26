#include "main.h"
/**
 * _strlen - cree tableur poiteur poite premier case du tableau.
 *	 a l'incrementation change de case
 * @s: is char
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
