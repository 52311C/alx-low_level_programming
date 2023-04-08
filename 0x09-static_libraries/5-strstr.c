#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: String where search is taking place
 * @needle: Substring to search for
 * Return: Pointer to the beginning of the located substring
 * Null if substring isn't found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

