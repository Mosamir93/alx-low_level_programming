#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point for program
 *
 * Return: 1 to  print an error message to stderr
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 201i5-10-19\n";

	write(stderr, quo, 59);
	return (1);
}
