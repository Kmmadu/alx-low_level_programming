#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
return 0;
unsigned int result = 0;
unsigned int x = 1;
unsigned int len = strlen(b);
for (int z = len - 1; z >= 0; z--)
{
if (b[z] != '0' && b[z] != '1')
return 0;
if (b[z] == '1')
{
result += x;
}
x *= 2;
}
return result;
}

