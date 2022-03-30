#include "main"

/**
*_strlen_recursion - Function that prints the length of a string
*@s: input string
*Return: Length of a string
*/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
