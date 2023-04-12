#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concantenates all argumets of program
 * @ac: number of arguments
 * @av: array of pointers to arguments
 * Return: pointer to new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int argm;
	int b;
	int i;
	int size;

	size = ac;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (argm = 0; argm < ac; argm++)
	{
		for (b = 0; av[argm][b]; b++)
		{size++;
		}
	}
	c = malloc(sizeof(char) * size + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (argm = 0; argm < ac; argm++)
	{
		for (b = 0; av[argm][b]; b++)
		{
			c[i++] = av[argm][b];
		}
		c[i++] = '\n';
	}
	c[size] = '\0';
	return (c);
}
