#include "variadic_functions.h"

/**
*print_all - prints anything
*@format: string with each element representing format of arguments
*/

void print_all(const char * const format, ...)
{
	char c;
	int i;
	unsigned int j = 0;
	float f;
	char *s;
	char *sep = "";
	va_list args;

	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j++;
	}
	printf("\n");
	va_end(args);
}
