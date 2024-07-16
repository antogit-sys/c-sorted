#include "../../header/sorting.h"

int* insertionSort(int* arr, size_t length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    for(size_t i = 1; i < length; ++i){
        int key = carray[i]; //current pos
        int j = i - 1; //prev pos
        
        while (j >= 0 && carray[j] > key){
            //sposto a destra carray[j]
            carray[j + 1] = carray[j];
            --j; //mi sposto a sinistra per confrontare k
        }
        carray[j + 1] = key;
    }

    return carray;
}
