#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - Reads a text file and prints it to std output
 * @filename: pathe of the file
 * @letters: number of letters should read and print
 *
 * Return: number of letters it could read and print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written, total_bytes = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	while (total_bytes < bytes_read)
	{
		bytes_written = write(STDOUT_FILENO,
				 buffer + total_bytes,
				 bytes_read - total_bytes);
		if (bytes_written < 0)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		total_bytes += bytes_written;
	}
	free(buffer);
	close(fd);
	return (total_bytes);
}
