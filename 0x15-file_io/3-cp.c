#include "main.h"
/**
 * make_buff - name
 * @filename: file
 *
 * creates buff of 1024 bytes
 * Return: buff
 */
char *make_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - name
 * @fd: int
 *
 * closes file
 * Return: void
 */
void close_file(int fd)
{
	int i;
	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - name
 * @argc: num of args
 * @argv: array of args
 *
 * copies the content of a file to another file
 * Return: 0 or 97 or 98 or 99 or 100
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = make_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}
