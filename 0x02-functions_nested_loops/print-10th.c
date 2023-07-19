#include "main.h"

/**
 * print_tenth - prints the 10the digit
 * @c: an integer number
 * Return 0: success
 */

void print_10th(int c)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
}
