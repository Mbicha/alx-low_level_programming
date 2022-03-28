#include "main.h"

/**
*print_alphabet_x10 - prints alphabets in lowercase 10 times
*
*Return: Nothing
*/

void print_alphabet_x10(void)
{
char lower_x10;
int i = 0;
while (i < 10)
{
for (lower_x10 = 'a'; lower_x10 <= 'z'; lower_x10++)
{
_putchar(lower_x10);
}
_putchar('\n');
i++;
}
}
