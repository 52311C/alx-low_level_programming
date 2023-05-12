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

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{	
		close(fd);
		return (0);
	}
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite == -1 || nwrite != nread)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	return (nwrite);
}


