#include "main.h"

/**
 * _strlen_recursion - returns lenghth of a string
 * @s: string value
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
