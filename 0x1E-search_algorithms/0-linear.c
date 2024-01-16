#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
    // loop through the array from the first element
    for (size_t i = 0; i < size; i++)
    {
        // print the current element
        printf("%d\n", array[i]);
        // check if the current element is equal to the value
        if (array[i] == value)
        {
            // return the index of the element
            return i;
        }
    }
    // if no match is found, return -1
    return -1;
}
