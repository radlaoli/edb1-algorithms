#include <stdio.h>
#include "../../include/searching.h"

int linearSearch(int *arr, int size, int target)
{
    for (int ii = 0; ii <= size; ii++)
    {
        if (arr[ii] == target)
        {
            return ii; // index position
        }
    }
    return -1;
};