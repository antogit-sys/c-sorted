#include "../../header/sorting.h"

int* oddEvenSort(int* arr, size_t length){
    bool sorted = false;
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array !!!");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    while(!sorted){
        sorted = true;

        /* sorting to odd index (dispari)*/
        for(size_t i = 1; i<length-1; i+=2){
            if(carray[i] > carray[i+1]){
                SWAP_VALUE(carray[i], carray[i+1]);
                sorted = false;
            }
        }
        
        /*sorting to even index (pari)*/
        for(size_t i = 0; i < length-1; i+=2){
            if (carray[i] > carray[i+1]){
                SWAP_VALUE(carray[i], carray[i+1]);
                sorted = false;
            }
        }
    }

    return carray;
}
