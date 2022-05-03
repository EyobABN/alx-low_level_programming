#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error97 - handles error 97
 *
 * Return: void.
 */
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * error98 - handles error 98
 * @f: the file name
 *
 * Return: void.
 */
void error98(char *f)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
	exit(98);
}
/**
 * error99 - handles error 99
 * @f: the file name
 *
 * Return: void.
 */
void error99(char *f)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
	exit(99);
}
/**
 * error100 - handles error 100
 * @fd: the file descriptor
 *
 * Return: void.
 */
void error100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int read_size1, write_size2, fd1, fd2, exists = 0;
	char buf[1024];

	if (ac != 3)
		error97();
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		error98(av[1]);
	if (access(av[2], F_OK) == 0)
		exists = 1;
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		error99(av[2]);
	if (!exists)
		fchmod(fd2, 0664);
	while (1)
	{
		read_size1 = read(fd1, buf, sizeof(buf));
		if (read_size1 == -1)
			error98(av[1]);
		write_size2 = write(fd2, buf, read_size1);
		if (write_size2 == -1)
			error99(av[2]);
		if (read_size1 == 0)
			break;
	}
	if (close(fd1) == -1)
		error100(fd1);
	if (close(fd2) == -1)
		error100(fd2);
	return (0);
}
