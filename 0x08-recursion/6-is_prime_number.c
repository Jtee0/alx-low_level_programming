#include "main.h"

/**
 * is_prime_number - looks for prime
 * @n: the number
 * Return: 1 if orime, 0 if not
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n % 2 == 0)
return (0);
else
return (_is_prime(n, n / 2));
}
