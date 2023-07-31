#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0' && *p != *s)
		{
			p++;
		}
		if (*p == '\0')
		{
			return (len);
		}
		len++;
		s++;
	}
	return (len);
}
