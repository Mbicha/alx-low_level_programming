#include "main.h"

int is_divisible_by(int number, int div);

/**
* is_prime_number - Afunction that checks if a number is prime.
* @n: an input integer
* Return: 1 if n is prime or  0 in otherwise
*/
int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
{
return (0);
}

if (n <= 3)
{
return (1);
}
return (is_divisible_by(n, div));
}

/**
* is_divisible_by - check if number is divisible
* @number: the number to be checked
* @div: the result of division
* Return: 1 if num is divisible or 0 if number is not divisible
*/
int is_divisible_by(int number, int div)
{
if (number % div == 0)
{
return (0);
}

if (div == number / 2)
{
return (1);
}

return (is_divisible_by(number, div + 1));

}
