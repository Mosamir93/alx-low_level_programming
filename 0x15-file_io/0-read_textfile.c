#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the text file name
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters + 1);
	if (!buff)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buff, letters);
		if (r < 0)
		{
			free(buff), close(fd);
			return (0);
		}
	buff[r] = '\0';
	w = write(STDOUT_FILENO, buff, r);
	if (w != r)
	{
		free(buff), close(fd);
		return (0);
	}
	free(buff), close(fd);
	return (r);
}
