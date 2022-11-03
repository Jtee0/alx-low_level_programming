#include "main.h"

/**
 * increasevar - increases i to find sqrt
 * @i: starts at 1
 * @n: the number
 * Return: i, i + 1, or -1
 */
int_increasevar(int i, int n)
{
if (i * i == n)
return (i);
if (i * i < n)
return (_increasevar(i + 1, n));
if (i * i > n)
return (-1);
return (i);
}
/**
 * __sqrt_recursion - finds sqrt
 * @n: the numb
 * Return:-1, 0, or sqrt
 */
int_sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
else if (n > 1)
{
return (_increaeevar(1, n));
}
return (-1);
}