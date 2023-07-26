#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @str: string to encode
 *
 * Return: an encoded string
 */

char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
			{
				str[i] += 13;
				break;
			}
			else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}
		}
	}
	return (str);
}
