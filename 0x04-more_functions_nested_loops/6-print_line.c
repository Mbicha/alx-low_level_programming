#include "main.h"

/**
*print_line - function that prints straight line in terminal
*@n: Number of times _ is printed
*/
void print_line(int n)
{
int i = 0;

for (; i <= n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
