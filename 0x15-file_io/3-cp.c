#include "main.h"

/**
 * file_check - Checks if source and destination file can be opened
 * @file_from: Source file
 * @file_to: Destination file
 * @argv: Argument vector
 * Return: void
 */

void file_check(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Code entry
 * Description: Copies one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error;
	char *buffer[1024];
	ssize_t chars, nwrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_check(file_from, file_to, argv);
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buffer, 1024);
		if (chars == -1)
		{
			file_check(-1, 0, argv);
		}
		nwrite = write(file_to, buffer, chars);
		if (nwrite == -1)
		{
			file_check(0, -1, argv);
		}
	}
	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
