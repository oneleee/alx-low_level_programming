#include "main.h"
#include <stdio.h>
/**
 * prime_checker - helper function to recursively check if a number is prime
 * @a: the integer to check
 * @n: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_checker(int a, int b)
{
if (b == a) /* base case: a is prime if b reaches a */
return (1);
if (a % b == 0) /* base case: a is not prime if a is divisible by b */
return (0);
return (prime_checker(a, b + 1)); /* increment divisor and continue checking */
}
/**
 * is_prime_number - checks if a number is a prime number recursively
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1) /* 0 and 1 are not prime numbers */
return (0);
return (prime_checker(n, 2)); /* check if n is prime starting from 2 */
}
