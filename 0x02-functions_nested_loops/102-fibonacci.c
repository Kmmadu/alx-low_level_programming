#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
long int a = 1, b = 2, c;
int i;
printf("%ld, %ld", a, b);
for (i = 2; i < 50; i++)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
}
printf("\n");
return (0);
}

