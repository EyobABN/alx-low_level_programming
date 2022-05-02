#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file to be created
 * @text_content: the text content
 *
 * Return: 1 on success, 01 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_size;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	write_size = write(fd, text_content, strlen(text_content));
	if (write_size == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
