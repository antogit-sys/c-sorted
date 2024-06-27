#include "../../header/sorting.h"

int* countingSort(int* arr, size_t dim){
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"failed allocation to array !!!");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    int max =  found_max(carray, dim);
    printf("%d",max);

   

    return carray;
}
