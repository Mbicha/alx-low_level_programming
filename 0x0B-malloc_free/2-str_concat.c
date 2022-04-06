#include "main.h"
#include <stdlib.h>

/**
* str_concat - A function that concatenates two strings
* @s1: An input pointer of the first string
* @s2: An input pointer of the second string
* Return: Apointer to concatened strings or NULL if it str is NULL
*/
char *str_concat(char *s1, char *s2)
{
char *new_str, *starts_first, *starts_second;
int i = 0, len_one = 0, len_two = 0;

starts_first = s1;
starts_second = s2;

if (s1 == NULL)
{
s1 = "";
}

while (*s1)
{
len_one++;
s1++;
}

s1 = starts_first;

if (s2 == NULL)
{
s2 = "";
}

while (*s2)
{
len_two++;
s2++;
}

s2 = starts_second;

new_str = malloc(sizeof(char) * (len_one + len_two + 1));

starts_first = new_str;

if (new_str == NULL)
{
return (NULL);
}

for (; i < (len_one + len_two); i++)
{
if (i < len_one)
{
new_str[i] = *s1;
s1++;
}
else
{
new_str[i] = *s2;
s2++;
}
}

new_str[i] = '\0';
return (starts_first);

}
