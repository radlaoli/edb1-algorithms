#include <stdio.h>
#include "../include/utils.h"

void printArray(int *array, int size)
{
    printf("[");
    for (int ii = 0; ii < size - 1; ii++)
    {
        printf("%d", array[ii]);
        printf(", ");
    }
    printf("%d", array[size - 1]);
    printf(" ]\n");
}