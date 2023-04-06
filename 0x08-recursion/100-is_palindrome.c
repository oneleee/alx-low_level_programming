#include "main.h"
#include <stdio.h>
/**
 * strlen_recursion - returns the length of a string
 * @a: string whose length is to be returned
 * Return: length of string
 */
int strlen_recursion(char *a)
{
if (*a == '\0')
return (0);
return (1 + strlen_recursion(a + 1));
}
/**
 * palindrome_checker - helper function to check if a string is a palindrome
 * @a: string to be checked
 * @b: starting index of string
 * @c: ending index of string
 * Return: 1 if a is a palindrome, 0 otherwise
 */
int palindrome_checker(char *a, int b, int c)
{
if (b >= c)
return (1);
if (a[b] == a[c])
return (palindrome_checker(a, b + 1, c - 1));
return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (palindrome_checker(s, 0, len - 1));
}
