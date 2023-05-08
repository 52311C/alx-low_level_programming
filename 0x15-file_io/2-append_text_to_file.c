#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: pointer to the filename
 * @text_content: Null terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	nwrite = write(0, text_content, len);
	if (fd == -1)
	{
		return (-1);
	}
	if (nwrite == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
