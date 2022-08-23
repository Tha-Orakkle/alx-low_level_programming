#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: string to be added to the file
 *
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;

		s = write(fd, text_content, count);
		if (s != count)
			return (-1);
	}
	close(fd);

	return (1);
}
