#include <unistd.h>

/**
 * main - Entry point of the program
 * Description: This program prints the specified message to the standard error.
 * Return: 1 (Error)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}

