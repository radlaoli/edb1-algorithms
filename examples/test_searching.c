#include <stdio.h>
#include "../include/searching.h"
#include "../include/utils.h"

int main()
{

    int data[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;

    int resultSearch = linearSearch(data, size, target);

    if (resultSearch != -1)
    {
        printf("Element found at index: %d\n", resultSearch);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}