#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int a = 1, b = 2, c;
int i;
printf("%lu, %lu, ", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
if (i != 97)
printf("%lu, ", c);
else
printf("%lu\n", c);
a = b;
b = c;
}
return (0);
}

