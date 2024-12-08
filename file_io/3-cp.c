#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * error_exit - exits from function and return an error message
 * @message: error message to print
 * @code: exit code
 * @arg: arg from main function
 *
 * Return: exit codes 97, 98,99 and 100
 */
int error_exit(const char *message, int code, const char *arg)
{
	if (arg)
		dprintf(STDERR_FILENO, message, arg);
	else
		dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}
/**
 * main - copies content of first file to second file
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97, NULL);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to %s\n", 99, argv[2]);
	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
		error_exit("Error: Can't read from %s\n", 98, argv[1]);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit("Error: Can't write to %s\n", 99, argv[2]);
		bytes_read = read(fd_from, buffer, 1024);
	}
	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd %d\n", 100, NULL);
	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd %d\n", 100, NULL);
	return (0);
}

