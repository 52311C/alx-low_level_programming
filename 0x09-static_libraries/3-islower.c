#include "main.h"

/**
 * _islower - Code entry
 * Description: Check for lowercase Character
 * @c: function checks this character
 * Return: 0
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
