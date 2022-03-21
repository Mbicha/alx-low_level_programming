#include "main.h"

/**
*swap_int - function that swaps two integers
*@a: an input integer pointer
*@b: an input integer pointer
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
