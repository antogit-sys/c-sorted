#include "../../header/sorting.h"

int* quickSortR(int* arr, long length){
    static bool srand_init = false;

    EXIT_IF(length == 0, "size to array not valid !!!");

    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array !!!");

    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);
    
    if(!srand_init){
        srand(time(NULL));
        srand_init = true;
    }


    /* begin position = 0 | end position = length-1*/
    __quick_sort_recursion(carray, 0, length - 1);

    return carray;
}

void __quick_sort_recursion(int* arr, long low, long high){
    if(low < high){
        long pivot_index = partition(arr, low, high);
        
        // apply quicksort to the left side subarray
        __quick_sort_recursion(arr, low, pivot_index - 1);
        
        // apply quicksort to the right side subarray
        __quick_sort_recursion(arr, pivot_index + 1, high);
    }   
}

long partition(int* array, long low, long high)
{
    int pivot_index = low + (rand() % (high - low));
    
    // non scambio elementi con se stessi e mi assicuro di avere sempre il pivot alla fine
    if (pivot_index != high)
        SWAP_VALUE(array[pivot_index], array[high]);
    
    int pivot_value = array[high];
    
    int i = low;
    
    for (int j = low; j < high; j++){
        if (array[j] <= pivot_value){
            SWAP_VALUE(array[i], array[j]);
            i++;
        }
    }
    
    //scambio pivot nella posizione corretta
    SWAP_VALUE(array[i], array[high]);
    
    return i;
}
