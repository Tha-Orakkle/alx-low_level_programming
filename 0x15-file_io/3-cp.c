#include "main.h"

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: array of arguments passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_r, fd_w, r, w, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(fd_r, buf, BUFSIZ);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (r > 0)
	{
		w = write(fd_w, buf, r);
		if (fd_w < 0 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	a = close(fd_r);
	b = close(fd_w);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
