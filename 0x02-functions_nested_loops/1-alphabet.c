#include "main.h"

/**
*print_alphabet - The function for printing alphabets
*in lowercase
*@lower: This is input char
*
*Return: Nothing
*/

void print_alphabet(void)
{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
{
_putchar(lower);
}
_putchar('\n');
}
