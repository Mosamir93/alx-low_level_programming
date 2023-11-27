#include "main.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fdr, fdw;
	ssize_t br, bw;
	char buffer[1024];
	const char *fr, *fw;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fr = argv[1];
	fw = argv[2];

	fdr = open(fr, O_RDONLY);
	if (fdr < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fr), exit(98);
	fdw = open(fw, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fw);
		close(fdr), exit(99);
	}
	while ((br = read(fdr, buffer, 1024)) > 0)
	{
		bw = write(fdw, buffer, br);
		if (bw != br)
		{
			close(fdr), close(fdw);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fw);
			exit(99);
		}
	}
	if (br < 0)
	{
		close(fdr), close(fdw);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fr), exit(98);
	}
	if (close(fdr) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr), exit(100);
	if (close(fdw) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
	return (0);
}
