#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*@argc: arguments count
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
		printf("Error\n"), exit(98);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	if (!(atoi(argv[3])) && (*(argv[2]) == '/' || *(argv[2]) == '%'))
		printf("Error\n"), exit(100);
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
