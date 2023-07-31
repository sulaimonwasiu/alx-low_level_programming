#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s != '\0'; s++)
	{
		for (*p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	}
}
