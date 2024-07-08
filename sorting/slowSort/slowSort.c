#include "../../header/sorting.h"

int* slowSort(int* arr, long length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    __slow_sort_recursion(carray, 0, length-1);

    return carray;
}

void __slow_sort_recursion(int* arr, long left, long right){
    if(left < right){
        long c = __CENTER_ARR(left, right);
        /* divide tutto in sotto array di sotto array*/
        __slow_sort_recursion(arr, left, c);
        __slow_sort_recursion(arr, c + 1, right);

        if (arr[right] < arr[c])
            SWAP_VALUE(arr[right], arr[c]);
             
        __slow_sort_recursion(arr, left, right-1);
    }
}
