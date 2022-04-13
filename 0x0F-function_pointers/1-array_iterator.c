#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator -  A function that executes a function given 
*as a parameter on each element of an array
*@array: pointer to array in integers
*@size: Size of an array
*@action: Function to iterate through
*Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k = 0;

if (action  == NULL || array == NULL)
{
return;
}

while (k < size)
{
action(array[k]);
k++;
}
}
