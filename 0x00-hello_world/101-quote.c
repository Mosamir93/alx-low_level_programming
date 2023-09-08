#include <unistd.h>

/**
 * main - entry point for program
 *
 * Return: 1 to print error into stderr
 */

int main(void)
{
	char sim[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sim, 59);
	return (1);
}
