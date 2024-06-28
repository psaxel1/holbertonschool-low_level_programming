#include "main.h"
/**
 * _strcmp - compare deux string et soustrais s1 par s2
 * @s1: array1
 * @s2:	array2
 * Return: 0 si eguale ou s1[i] - s2[i] si pas identique
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;


	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			return (0);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
