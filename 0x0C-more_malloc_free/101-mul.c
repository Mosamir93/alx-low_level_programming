#include "main.h"
#include <stdlib.h>

/**
*_memset - fills memory with a constant byte
*@s: memory area pointer
*@b: the constant byte
*@n: number of bytes to fill
*Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned long int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 *printerror - print Error, followed by a new line, and exit status of 98
 */

void printerror(void)
{
	int i;
	char arr[] = {'E', 'r', 'r', 'o', 'r', '\n'};

	for (i = 0; i < 6; i++)
		_putchar(arr[i]);
	exit(98);
}

/**
 *_isdigit - checks if elements of a string are digits
 *@argv: string to be checked
 *Return: 0 for success 1 for failure
 */

int _isdigit(char *argv)
{
	unsigned long int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}

/**
*_strlen - calculates length of a string
*@s: string to calculate it's length
*Return: length of the string
*/

int _strlen(char *s)
{
	unsigned int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len += 1;
	return (len);
}

/**
*_mul - multiplies 2 strings
*@num1: first string
*@num2: second string
*Return: pointer to the resulted string
*/

char *_mul(char *num1, char *num2)
{
	long int i, j, sum, len1, len2;
	char *res;

	if (*num1 == '\0')
		return (NULL);
	if (*num2 == '\0')
		return (NULL);
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	_memset(res, '0', len1 + len2 + 1);
	res[len1 + len2] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + (res[i + j + 1] - '0');
			if (sum > 9)
			{
				res[i + j + 1] = sum % 10 + '0';
				res[i + j] += sum / 10;
			}
			res[i + j + 1] = sum + '0';
		}
	}
	return (res);
}
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: arguments vector
 *Return: 0 for success
 */

int main(int argc, char **argv)
{
	int i, len, start;
	char *result;
	char *result2;

	(void)argc;
	if (argc != 3)
		printerror();
	if (argv[1] == NULL)
		printerror();
	if (argv[2] == NULL)
		printerror();
	if (_isdigit(argv[1]) == 1)
		printerror();
	if (_isdigit(argv[2]) == 1)
		printerror();
	result = _mul(argv[1], argv[2]);
	for (i = 0; result[i] == '0'; i++)
	;
	len = 0;
	start = i;
	for (; result[i] != '\0'; i++)
		len += 1;
	result2 = malloc((len + 1) * sizeof(char));
	if (result2 == NULL)
	{
		printerror();
		return (1);
	}
	for (i = 0; i <= len - 1; i++, start++)
	{
		result2[i] = result[start];
		_putchar(result2[i]);
	}
	result2[len] = '\0';
	free(result);
	_putchar(result2[i]);
	free(result2);
	_putchar('\n');
	return (0);
}
