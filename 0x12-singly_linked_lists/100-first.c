#include "lists.h"

void _premain(void) __attribute__ ((constructor));

/**
 * _premain - executed before the main function
 * Return: void
 */
void _premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
