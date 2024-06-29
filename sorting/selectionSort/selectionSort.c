#include "../../header/sorting.h"

int* selectionSort(int* arr, size_t length){
    int posmin;
    int* carray = NEW_ARRAY(int, length);
    
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    /* Found min to array */
    for(size_t i = 0; i<length-1; ++i){
        posmin = found_min_position(carray, i, length);
        SWAP_VALUE(carray[i], carray[posmin]);
    }

    return carray;
}
