#include <stdio.h>
#include "../../header/sorting.h"
#include "../../header/god.h"

int main()
{
    int* arr = ASSIGNMENT(int, 4, 2, 5, 1, 3, 14, 32, 10);
    size_t len = 8;
    printf("%zu",len);

    printf("Array originale:\n");
    GARROUT(arr, len);
    putchar('\n');

    arr = stalinSort(arr, &len);
    //int* narr = NEW_ARRAY(int, new_size);
    //if(!narr) return 1;

    //ARRCPY(narr, arr, new_size);

    printf("Array ordinato secondo lo Stalin sort:\n");
    GARROUT(arr, len);
    putchar('\n');

    return 0;
}

