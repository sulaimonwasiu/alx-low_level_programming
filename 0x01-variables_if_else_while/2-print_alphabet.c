#include <stdio.h>

/**
 * main - function prints all lower case alphas using putchar
 *
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');

	return (0);
}
