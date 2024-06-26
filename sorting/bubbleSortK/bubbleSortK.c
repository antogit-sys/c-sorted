#include "../../header/sorting.h"

int* bubbleSortK(int* arr, size_t dim, short k){
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"failed allocation to array !!!");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    /* k = 1 (Crescent) || k = -1 (Decrescent)*/
    for(int i = 0; i < dim-1; ++i){
        for(int j = 0; j < dim-i-1; ++j){
            if( (k * (carray[j]-carray[j+1])) > 0){
                SWAP_VALUE(carray[j], carray[j+1]);
            }
        }
    }

    return carray;
}
