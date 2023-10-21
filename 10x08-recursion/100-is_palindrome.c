#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: string to measure it's length
 *Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}

/**
*compare - compares characters from both ends
*@s: string to be compared
*@begin: the beginning of the string
*@length: the end of the string
*Return: 1 if palindrome 0 if not
*/

int compare(char *s, int begin, int length)
{
	if (begin == length || begin == length + 1)
		return (1);
	else if (s[begin] != s[length])
		return (0);
	return (compare(s, begin + 1, length - 1));
}

/**
*is_palindrome - checks if string is palindrome
*@s: string to be checked
*Return: 1 if palindrome 0 if not
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	return (compare(s, 0, len - 1));
}
