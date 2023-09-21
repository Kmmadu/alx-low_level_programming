#include "main.h"

/**
 * infinite_add - Adds two numbers as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, carry = 0;
for (i = 0; n1[i] != '\0' || n2[i] != '\0' || carry; i++)
{
if (i >= size_r)
return (0);
int sum = carry;
if (n1[i] != '\0')
sum += n1[i] - '0';
if (n2[i] != '\0')
sum += n2[i] - '0';
r[i] = (sum % 10) + '0';
carry = sum / 10;
}
if (i >= size_r)
return (0);
r[i] = '\0';
return (r);
}

