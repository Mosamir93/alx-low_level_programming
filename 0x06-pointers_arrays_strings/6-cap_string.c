#include "main.h"

/**
 *cap_string - capitalize words of a string
 *@str: string to be changed
 *Return: str the changed string
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[13] = ",;.!?\"(){}\t\n ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 16; j++)
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
