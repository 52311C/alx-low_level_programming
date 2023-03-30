#include "main.h"

/**
 * _strcmp - Cmopare two strings
 * @s1: STring value
 * @s2: String value
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	while (s1[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	b = s1[a] - s2[a];

	return (b);

}
