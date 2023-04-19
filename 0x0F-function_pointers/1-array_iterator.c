#include "function_pointers.h"

/**
 * array_iterator - exectues a function given as a
 * paramater on each elemnt of an array
 * @array: an array
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	do {
		action(*array);
		array++;
	} while (size-- > 0);
}
