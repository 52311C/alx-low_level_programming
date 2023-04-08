#include <unistd.h>
 /**
  * _putchar - used for output
  * Description: For output
  * Return:1
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
