#include <unistd.h>
#include "main.h"

/**
*main - Check description
*
*Return: (0)
*/

int main(void)
{
char word[10] = "_putchar";
int i;

for (i = 0; i < 10; i++)
{
_putchar(word[i]);
}
_putchar('\n');

return (0);
}
