#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @str: string
 * Return: string `str` rotated
 */

char *rot13(char *str)
{
	static char result[1024];
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result[j] = ((str[i] - 'a' + 13) % 26) + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result[j] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		else
		{
			result[j] = str[i];
		}
	}
	result[j] = '\0';

	return (result);
}
