#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: numver of letters it should read and print
 *
 * Return: the actual number of letters printed otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	ssize_t count = 0;
	char ch;
	FILE *fptr;

	if (!filename)
		return (0);
	fptr = fopen(filename, "r");

	if (!fptr)
		return (0);
	while (i < letters)
	{
		ch = fgetc(fptr);
		write(STDOUT_FILENO, &ch, 1);
		count++;
	}

	fclose(fptr);

	return (count);
}
