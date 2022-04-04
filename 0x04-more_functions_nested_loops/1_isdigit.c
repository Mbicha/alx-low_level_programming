#include "main.h"

/**
*_isdigit - Function that checks a digit 0 through 9
*@c: Input Integer
*Return: 1 if digit and 0 otherwise
*/
int _isdigit(int c)
{
int isdigit = 0;
char counter = '0';

for (; counter <= '9'; counter++)
{
if (c == counter)
{
isdigit = 1;
break;
}
}

return (isdigit)

}
