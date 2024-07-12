#include "../../header/sorting.h"

int* pancakeSort(int* arr, size_t dim){
    int maxIndex;
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"Failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    /* Descending order  (<)*/
    do{
        maxIndex = found_max_position(carray, 0, dim);
        if (maxIndex != dim) {
            flip(carray, maxIndex);
            flip(carray, dim - 1);
        }
        
    }while (dim --> 1);

    return carray;
}

void flip(int* arr, size_t k){
    int left = 0;
    while (left < k) {
        SWAP_VALUE(arr[left], arr[k]);
        left++;
        k--;
    }
}

