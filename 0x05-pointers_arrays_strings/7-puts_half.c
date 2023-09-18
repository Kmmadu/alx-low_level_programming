#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int len = 0;
int i;
while (str[len] != '\0')
{
len++;
}
i = len / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

