#include "main.h"
#include <stdio.h>
/**
 * sqrt_helper - Helper function to find the sqrt of a number recursively.
 * @a: The number to find the square root of.
 * @b: The current guess.
 *
 * Return: The natural square root of the number @n, or -1 if it does not exist
 */
int sqrt_helper(int a, int b)
{
if (b * b > a)
return (-1);
if (b * b == a)
return (b);
return (sqrt_helper(a, b + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of the number @n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (sqrt_helper(n, 1));
}
