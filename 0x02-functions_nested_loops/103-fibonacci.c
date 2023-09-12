#include <stdio.h>

/**
 * main - finds and prints the sum of even Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
long int a = 1, b = 2, c, sum = 2;
while (1)
{
c = a + b;
if (c > 4000000)
break;
if (c % 2 == 0)
sum += c;
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}

