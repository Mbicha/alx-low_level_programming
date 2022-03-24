#include "main.h"

/**
*_strcmp - Function to compare two strings
*@s1: Input string
*@s2: Input string
*Return: The difference
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
s1++, s2++;
}

return (*s1 - *s2);
}

}
