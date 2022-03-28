#include "main.h"

/**
*_islower - The function to check lower case letter
*@c: input character
*
*Return: 1 if lower 0 if upper
*/

int _islower(int c)
{
char checklower;
int lower = 0;

for (checklower = 'a'; checklower <= 'z'; checklower++)
{

if (checklower == c)
{ 
lower = 1;
}

}

return (lower);

}
