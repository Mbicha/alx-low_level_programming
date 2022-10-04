#include "search_algos.h"

/**
 * linear_search - Implimentation of Linear Search
 * @array: pointer at first array element
 * @size: Size of an array
 * @value: value to search for
 * Return: index of value in an array, -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    
    if (array == NULL)
        return (-1);
    
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
