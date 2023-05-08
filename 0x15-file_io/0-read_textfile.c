#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the filename
 * @letters: Number of letters to read and print
 * Return: Actual number of letters it could read and print, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t nread;
	size_t nwrite;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	nread = read(fd, buffer, letters);
	if (nread == 0)
	{
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite == 0 || nwrite != nread)
	{
		return (0);
	}
	return (nwrite);
}


