#include "main.h"

/*
 * _isupper(int c) - Code entry for function
 * Description: Check for uppercase character
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
