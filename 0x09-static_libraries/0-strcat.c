#include "main.h"

/**
*_strcat - a function that concatenates src to dest
*@dest: first string
*@src: string to be concatenated to dest
*Return: Pointer to new string
*/

char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest)
{
dest++;
}

while (*src)
{
*dest++ = *src++;
}

*dest = '\0';
return (temp);
}
