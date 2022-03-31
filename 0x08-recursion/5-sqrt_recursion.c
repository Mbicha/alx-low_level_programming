#include "main.h"

/**
*_sqrt_recursion - Function to calculate square root of a number
*@n: input number
*Return: squreroot or -1 if not nutural number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (n *= _sqrt_recursion(n));

}
