#include <stdio.h>

/**
 * main - print hexadecimals in lower case
 *
 * Return: 0;
 */

int main(void)
{
	char num = '0';
	char letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
