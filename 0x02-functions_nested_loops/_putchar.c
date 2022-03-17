#include <unistd.h>

/**
*_putchar - writes the character c
*@c - character to print
*
*return 1 on success
*On error: return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
