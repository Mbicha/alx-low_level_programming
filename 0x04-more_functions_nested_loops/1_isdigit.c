#include "main.h"

/**
*_isdigit - Function that checks a digit 0 through 9
*@c: Input Integer
*Return: 1 if digit and 0 otherwise
*/
int _isdigit(int c)
{
int isdigit = 0;
int counter;

for (counter = 0; counter <10; counter++)
{
if (c == counter)
{
counter = 1;
break;
}
}

return (counter)

}
