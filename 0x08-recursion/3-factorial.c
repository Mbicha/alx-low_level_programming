#include "main.h"

/**
*factorial - Function factorial of a number
*@n: input integer
*Return: Factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n <= 1)
{
return (1);
}

return (n * factorial(n - 1));

}
