#include "main.h"

int open_files(char *file_from, char *file_to);
int copy_files(int fd_from, int fd_to);
int close_files(int fd_from, int fd_to);

/**
 * main - Entry point, copies one file to another.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: 0 on success, or one of the three error codes.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_files(argv[1], argv[2]);
	fd_to = open_files(argv[2], NULL);

	if (copy_files(fd_from, fd_to) == -1)
		exit(99);

	if (close_files(fd_from, fd_to) == -1)
		exit(100);

	return (0);
}

/**
 * open_files - Opens a file.
 * @filename: Name of the file to open.
 * @text_content: Content to write to the file.
 * Return: File descriptor on success, -1 on failure.
 */
int open_files(char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	if (text_content)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	}
	else
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	}

	return (fd);
}

/**
 * copy_files - Copies content from one file to another.
 * @fd_from: File descriptor of source file.
 * @fd_to: File descriptor of destination file.
 * Return: 0 on success, -1 on failure.
 */
int copy_files(int fd_from, int fd_to)
{
	char buffer[1024];
	int read_res, write_res;

	while ((read_res = read(fd_from, buffer, 1024)) > 0)
	{
		write_res = write(fd_to, buffer, read_res);
		if (write_res != read_res)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
			return (-1);
		}
	}

	if (read_res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		return (-1);
	}

	return (0);
}

/**
 * close_files - Closes file descriptors.
 * @fd_from: File descriptor of source file.
 * @fd_to: File descriptor of destination file.
 * Return: 0 on success, -1 on failure.
 */
int close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (-1);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}

	return (0);
}
