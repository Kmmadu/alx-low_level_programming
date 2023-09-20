#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the input string
 *
 * Return: a pointer to the modified string
 */
char *leet(char *str)
{
char leet_replace[] = "aAeEoOtTlL";
char leet_encode[] = "4433007711";
int i, j;
for (i = 0; str[i]; i++)
{
for (j = 0; leet_replace[j]; j++)
{
if (str[i] == leet_replace[j])
{
str[i] = leet_encode[j];
break;
}
}
}
return (str);
}

