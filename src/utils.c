#include <stdio.h>
#include "../include/utils.h"

void printArray(int *array, int size)
{
    printf("[");
    for (int ii = 0; ii < size - 1; ii++)
    {
        printf(array[ii], ", ");
    }
    printf(array[size - 1], " ]");
}