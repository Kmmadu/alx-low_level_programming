#include "main.h"

int is_prime_recursive(int n, int i);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive -  to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
if (n <= 1)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_recursive(n, i + 1));
}

