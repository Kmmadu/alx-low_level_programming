#include "main.h"

/**
 * calculate_sqrt - Recursively calculates the square root of a number.
 * @n: The number to find the square root of.
 * @i: The current value being tested as a potential square root.
 *
 * Return:oot of n, or -1 if n does not have a natural square root.
 */
int calculate_sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (calculate_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return:, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (calculate_sqrt(n, 2));
}

