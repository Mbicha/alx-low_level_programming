#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int scrlen = 0, i = 0;
char *temp = dest, *start = src;

while (*src)
{
scrlen++;
src++;
}

scrlen++;

if (n > scrlen)
{
n = scrlen;
}

src = start;

for (;i < n; i++)
{
*dest++ = *src++;
}

return (temp);
}
