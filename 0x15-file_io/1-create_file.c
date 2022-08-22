#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to be added to the new file
 *
 * Return: 1 for success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, s, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content)
		{
			text_content++;
			count++;
		}

		s = write(fd, text_content, count);
		if (s != count)
			return (-1);
	}

	close(fd);

	return (1);
}

