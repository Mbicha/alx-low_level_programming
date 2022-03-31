#include "main.h"
int _sqrt(int first, int root);

/**
* _sqrt_recursion - It returns the value of square root of n.
* @n: an input integer
* Return: The square root of n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (_sqrt(1, n));

}

/**
* _sqrt - find square root
* @first: previous value
* @root: square root value
* Return: the square root
*/
int _sqrt(int first, int root)
{
if (first > root)
{
return (-1);
}
else if (first * first == root)
{
return (first);
}

return (_sqrt(first + 1, root));

}
