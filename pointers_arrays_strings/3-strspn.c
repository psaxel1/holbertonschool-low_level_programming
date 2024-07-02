#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j, a;

	a = 0;

	for (j = 0; s[j] != ' '; j++ )
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				a++;
			}
		}
	}
	return (a);	
}
