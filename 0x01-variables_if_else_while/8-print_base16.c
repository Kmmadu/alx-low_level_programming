#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
char lowercaseLetter = 'a';
while (lowercaseLetter <= 'f')
{
putchar(lowercaseLetter);
lowercaseLetter++;
}
putchar('\n');
return (0);
}

