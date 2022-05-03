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
	int read_size1, write_size2;
	char buf[1024];
	int fd[2], close_fd[2], i;

	if (ac != 3)
		error97();
	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] == -1)
		error98(av[1]);
	fd[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd[1] == -1)
		error99(av[2]);
	read_size1 = read(fd[0], buf, sizeof(buf));
	if (read_size1 == -1)
		error98(av[1]);
	write_size2 = write(fd[1], buf, read_size1);
	if (write_size2 == -1)
		error99(av[2]);
	close_fd[0] = close(fd[0]);
	close_fd[1] = close(fd[1]);
	for (i = 0; i < 2; i++)
		if (close_fd[i] == -1)
			error100(fd[i]);
	return (0);
}
