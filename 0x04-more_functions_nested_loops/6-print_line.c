#include "main.h"

/**
*print_line - function that prints straight line in terminal
*@n: Number of times _ is printed
*/
void print_line(int n)
{
int i = 0;

if (n > 0)
{
for (; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
