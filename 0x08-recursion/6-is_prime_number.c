#include "main.h"

/**
 * other_function - check if number is prime
 * @num: the number
 * @it: possible factor of the number
 * Return: if not prime 0
 *         if prime 1
 */

int other_function(int num, int it)
{
	if (it < num)
	{
		if (num % it == 0)
		{
			return (0);
		}

		else
		{
			return (other_function(num, it + 1));
		}
	}

	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: number to be checked
 * Return: 1 if prime
 *         0 if not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (other_function(n, 2));
	}
}
