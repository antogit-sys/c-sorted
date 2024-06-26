#include "../../header/sorting.h"

// k = 1 (order crescent) | k = -1 (order decrescent)
int* shakerSortK(int* arr, size_t dim, short k){
    EXIT_IF(dim == 0, "size to array not valid !!!");

    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"failed allocation to array !!!");

    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    bool swap = true;
    size_t start = 0, end = dim - 1;

    while(swap){
        swap = false;
        for(size_t i = start; i < end; ++i){
            if(SETK(carray, i, k)){
                SWAP_VALUE(carray[i], carray[i+1]);
                swap = true;
            }
        }

        if(!swap) break;
        
        --end;

        for(size_t i = end; i-->start;){
            if(SETK(carray, i, k)){
                SWAP_VALUE(carray[i], carray[i+1]);
                swap = true;
            }
        }
        ++start;

    }

    return carray;
}
