#include "main.h"
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the number of chars actually printed, or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_size, write_size;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read_size = read(fd, buf, letters);
	if (read_size < 0)
	{
		close(fd);
		return (0);
	}
	buf[letters] = '\0';
	write_size = write(STDOUT_FILENO, buf, read_size);
	if (write_size < 0 || write_size != read_size)
	{
		close(fd);
		return (0);
	}
	close(fd);
	free(buf);
	return (write_size);
}
