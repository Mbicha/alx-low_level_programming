#include "main.h"

/**
*print_numbers - Function that prints numbers from 0-9
*
*Return: Nothing
*/
void print_numbers(void)
{
char numbers = '0';

for (; numbers <= '9'; numbers++)
{
_putchar(numbers);
}
_putchar('\n');
}
