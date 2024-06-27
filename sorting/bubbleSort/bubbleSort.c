#include "../../header/sorting.h"

int* bubbleSort(int* arr, size_t dim){
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"failed allocation to array !!!");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    /* Descending order  (<)*/
    for(int i = 0; i < dim-1; ++i){
        for(int j = 0; j < dim-i-1; ++j){
            if(carray[j] < carray[j+1]){
                SWAP_VALUE(carray[j], carray[j+1]);
            }
        }
    }

    return carray;
}
