#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w;

	if (argc != 3)
		error_handler("Usage: cp file_from file_to", NULL, 97);

	fd_r = open_file(argv[1], O_RDONLY, "Error: Can't read from file ", 98);
	fd_w = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			 "Error: Can't write to ", 99);
	copy_content(fd_r, fd_w, argv[1], argv[2]);
	close_files(fd_r, fd_w);

	return (0);
}

/**
 * error_handler - Handles errors for the main function
 * @msg: The error message to display
 * @filename: The name of the file associated with the error
 * @status: The exit status code
 */
void error_handler(const char *msg, const char *filename, int status)
{
	if (filename)
		dprintf(STDERR_FILENO, "%s%s\n", msg, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(status);
}

/**
 * open_file - Opens a file with the given flags and handles errors
 * @filename: The name of the file to open
 * @flags: The flags to use when opening the file
 * @errmsg: The error message to display if the file can't be opened
 * @status: The exit status code if an error occurs
 *
 * Return: The file descriptor of the opened file
 */
int open_file(const char *filename, int flags, const char *errmsg, int status)
{
	int fd = open(filename, flags, 0664);

	if (fd < 0)
		error_handler(errmsg, filename, status);
	return (fd);
}

/**
 * copy_content - Copies content from one file to another
 * @fd_r: The file descriptor of the source file
 * @fd_w: The file descriptor of the destination file
 * @src: The name of the source file (for error messages)
 * @dest: The name of the destination file (for error messages)
 */
void copy_content(int fd_r, int fd_w, char *src, char *dest)
{
	ssize_t x;
	char buf[BUFSIZ];

	while ((x = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (write(fd_w, buf, x) != x)
			error_handler("Error: Can't write to ", dest, 99);
	}
	if (x < 0)
		error_handler("Error: Can't read from file ", src, 98);
}

/**
 * close_files - Closes two file descriptors and handles errors
 * @fd1: The first file descriptor to close
 * @fd2: The second file descriptor to close
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
