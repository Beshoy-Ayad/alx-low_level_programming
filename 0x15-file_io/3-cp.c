#include "main.h"

#define BUFSIZE 1024

/**
 * copy_file - copies the content of a file to another file
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 * @argv: array of arguments
 * Return: nothing, exit with code on failure
 */
void copy_file(int fd_from, int fd_to, char *argv[])
{
	int r_bytes, w_bytes;
	char buffer[BUFSIZE];

	while ((r_bytes = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	copy_file(fd_from, fd_to, argv);
	close(fd_from);
	close(fd_to);
	return (0);
}
