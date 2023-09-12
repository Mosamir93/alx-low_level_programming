#include "main.h"

/**
 *print_alphabet - prints a-z in lowercase
 *
 */

void print_alphabet(void);
{
	int c;

	for (c = 'a', c <= 'z', c++)
		_putchar(c);
		_putchar('\n');
}
