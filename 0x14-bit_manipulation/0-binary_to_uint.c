#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
int z;
unsigned int num;

num = 0;
if (!b)
return (0);
for (z = 0; b[z] != '\0'; z++)
{
if (b[z] != '0' && b[z] != '1')
return (0);
}
for (z = 0; b[z] != '\0'; z++)
{
num <<= 1;
if (b[z] == '1')
num += 1;
}
return (num);
}
