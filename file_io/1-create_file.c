#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - Creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 if successful, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || (size_t)bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
