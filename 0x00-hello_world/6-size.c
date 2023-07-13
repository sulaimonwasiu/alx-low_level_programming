#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the size of various
 * types to the console using the sizeof operator.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
printf("Size of a float: %ld byte(s)\n", sizeof(float));

/* Return 0 to indicate successful completion */
return (0);
}
