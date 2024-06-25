#include "../header/sorting.h"

int* shakerSort(int* arr, size_t dim){
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
            if(carray[i] > carray[i+1]){
                SWAP_VALUE(carray[i], carray[i+1]);
                swap = true;
            }
        }

        if(!swap) break;
        
        --end;

        for(size_t i = end; i-->start;){
            if(carray[i] > carray[i+1]){
                SWAP_VALUE(carray[i], carray[i+1]);
                swap = true;
            }
        }
        ++start;

    }

    return carray;
}
