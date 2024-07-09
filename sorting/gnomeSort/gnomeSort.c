#include "../../header/sorting.h"

int* gnomeSort(int* arr, size_t length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array !!!");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    for(size_t i = 0; i<length;){
        if(i == 0) ++i; //next pos

        if(array[i] >= carray[i-1]) ++i; //next pos
        else{
            SWAP_VALUE(carray[i], carray[i-1]); //change current pos with prev pos 
            --i;
        }
    }

    return carray;
}
