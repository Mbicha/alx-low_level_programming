#include "main.h"

/**
*print_most_numbers - Function that prints most numbers
*from 0 - 9 followed by new line
*Return: Always 0
*/
void print_most_numbers(void)
{
char numbers = '0';

for (;numbers <= '9'; numbers++)
{

if (numbers != '2' && numbers != '4')
{
_putchar(numbers);
}

}

_putchar('\n');

}
