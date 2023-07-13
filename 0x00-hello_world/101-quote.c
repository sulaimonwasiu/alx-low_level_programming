#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * This function writes a string to the
 * standard error using the write function.
 *
 * Return: 1 (always)
 */
int main(void)
{
/* Define a string to print */
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

/* Use the write function to output the string to the standard error */
write(STDERR_FILENO, str, strlen(str));

/* Return 1 to indicate failure */
return (1);
}
