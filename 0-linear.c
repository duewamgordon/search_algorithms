#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search algorithm.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of @value in @array, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i; 

    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        printf("Comparing with value: %d\n", array[i]);

        if (array[i] == value)
            return i; 
    }

    return -1;
}
