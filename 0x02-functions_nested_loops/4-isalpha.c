#include "main.h"

/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
int counter;
int checker = 0;

for (counter = 0; counter < 10; counter++)
{
if (c != counter)
{
checker = 1;
}
}

return (checker);

}
