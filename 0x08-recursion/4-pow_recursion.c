#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base integer value.
 * @y: The exponent integer value.
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
