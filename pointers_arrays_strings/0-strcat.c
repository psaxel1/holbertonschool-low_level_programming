#include "main.h"
/**
 * _strcat -ajoute source a dest
 *@dest: destination
 *@src: source
 *Return: temp qui egale a dest plus source
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	int i;

	for (i = 0; dest[i] != '\0'; *dest++)
	{
	}
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);
}
