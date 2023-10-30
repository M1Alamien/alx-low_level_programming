#include "main.h"
/**
* read_textfile - name
* @filename: filename
* @letters: int
*
* reads a text file and prints the output
* Return: 0 or num of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, r, o;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	o = open(filename,  O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
	free(buff);
	return (0);
	}
	free(buff);
	close(o);
	return (w);
}
