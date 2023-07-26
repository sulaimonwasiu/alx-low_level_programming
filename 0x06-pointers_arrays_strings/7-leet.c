#include "main.h"

/**
 * leet - leet encoding
 * @str: pointer to a string
 *
 * Return: char
 */

char *leet(char *str)
{
	char *leet_chars = "43071";
	char *leet_letters = "aAeEoOtTlL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_chars[j / 2];
				break;
			}
		}
	}
	return (str);

}
