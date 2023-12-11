#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int ni = 0;
int sign = 1;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
ni = ni * 10 + (*s - '0');
if (*(s + 1) < '0' || *(s + 1) > '9')
{
if (sign < 0)
ni *= sign;
return (ni);
}
}
else if (*s != '+' && *s != ' ')
break;
s++;
}
if (sign < 0)
ni *= sign;
return (ni);
}

