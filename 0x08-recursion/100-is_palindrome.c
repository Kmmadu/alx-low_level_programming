#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int length = _strlen(s);
return (check_palindrome(s, 0, length - 1));
}

/**
 * _strlen - calculate the length of a string
 * @s: the string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - recursively check if a string is a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

