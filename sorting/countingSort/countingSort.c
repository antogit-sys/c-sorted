#include "../../header/sorting.h"
#include <stdarg.h>
int* countingSort(int* arr, size_t dim){
    int* carray, *count;
    int max; 

    EXIT_IF(dim == 0, "size not valid");

    carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray, "Failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    max = found_max(carray, dim);

    count = NEW_ARRAY(int, max+1);
    EXIT_IF(!count, "Failed allocation to count array");

    /* count occurrence for each value to array */
    for(size_t i = 0; i < dim; ++i){
        count[carray[i]]++;
    }

    /* rebuilding sorted array */
    int index = 0;
    for (int i = 0; i <= max; i++){
        while (count[i] --> 0){
            carray[index++] = i;
            //count[i]--;
        }
    }
    
    free(count);

    return carray;
}
