#include <stdio.h>
#include "search_algos.h"

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
    {
        return -1;
    }

    return advanced_binary_recursive(array, 0, size - 1, value);
}

int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
    if (start > end)
    {
        return -1;
    }

    size_t mid = (start + end) / 2;

    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }

    if (array[mid] == value)
    {
        if (mid == start || array[mid - 1] != value)
        {
            return mid;
        }
        else
        {
            return advanced_binary_recursive(array, start, mid - 1, value);
        }
    }
    else if (array[mid] < value)
    {
        return advanced_binary_recursive(array, mid + 1, end, value);
    }
    else
    {
        return advanced_binary_recursive(array, start, mid - 1, value);
    }
}



