#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to the filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on successm -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		nwrite =  write(fd, text_content, strlen(text_content));
		if (nwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
}
