#include "../header/sorting.h"

int* leadSort(int* arr, size_t dim){
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"failed allocation to array !!!");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    /* the heavy elements always go to the end */
    for(int i = dim; i --> 0; ){
        for(int j = 0; j < i; ++j){
            if(carray[j] > carray[j+1]){
                SWAP_VALUE(carray[j], carray[j+1]);
            }
        }
    }

    return carray;
}
