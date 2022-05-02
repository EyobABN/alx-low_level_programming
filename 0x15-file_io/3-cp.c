#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd[0] = open(av[1], O_RDONLY);
	fd[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	read_size1 = read(fd[0], buf, sizeof(buf));
	write_size2 = write(fd[1], buf, read_size1);
	if (fd[1] == -1 || write_size2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_fd[0] = close(fd[0]);
	close_fd[1] = close(fd[1]);
	for (i = 0; i < 2; i++)
	{
		if (close_fd[i] == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[i]);
			exit(100);
		}
	}
	return (0);
}
