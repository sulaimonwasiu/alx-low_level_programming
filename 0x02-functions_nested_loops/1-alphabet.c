#include "main.h"

/**
 * print_alphabet - display alphabet in the lowercase
 *
 * Return: 0 success
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
