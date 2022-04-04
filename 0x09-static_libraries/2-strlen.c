#include "main.h"

/**
*_strlen - Function to print length of string
*@s: pointer storing string
*Return: Nothing
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
