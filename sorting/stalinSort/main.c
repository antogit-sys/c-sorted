#include <stdio.h>
#include "../../header/sorting.h"

int main() {
    int arr[] = {4, 2, 5, 1, 3, 14, 32, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Array originale:\n");
    ARROUT(arr, len);
    putchar('\n');

    int new_size = stalinSort(arr, len);
    int* narr = NEW_ARRAY(int, new_size);
    if(!narr) return 1;

    ARRCPY(narr, arr, new_size);

    printf("Array ordinato secondo lo Stalin sort:\n");
    ARROUT(arr, new_size);
    putchar('\n');

    return 0;
}

