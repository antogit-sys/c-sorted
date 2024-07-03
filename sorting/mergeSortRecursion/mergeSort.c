#include "../../header/sorting.h"

int* mergeSortR(int* arr, size_t length){
    EXIT_IF(length == 0, "size to array not valid !!!");

    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array !!!");

    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    /* begin position = 0 | end position = length-1*/
    __merge_sort_recursion(carray, 0, length - 1);

    return carray;
}

void __merge_sort_recursion(int* arr, size_t left, size_t right){
    if(left < right){
        /*__CENTER_ARR macro defined in sorting.h  */
        // center is center point to arr
        size_t center = __CENTER_ARR(left, right); //(left + (right - left)/2)
        
        /* order sx <-- */
        __merge_sort_recursion(arr, left, center); //left in center
        /* order dx -->*/
        __merge_sort_recursion(arr, center + 1, right); //center + 1 in right
        
        /*order by subgroup sx and dx */
        __merge_sorted_arrays(arr, left, center, right);
    }    
}

void __merge_sorted_arrays(int* arr, size_t l, size_t c, size_t r){
    size_t left_length = c - l + 1;
    size_t right_length = r - c;

    int* temp_left = NEW_ARRAY(int, left_length);
    int* temp_right = NEW_ARRAY(int, right_length);
    
    EXIT_IF(!temp_left, "failed allocation to temp_left array");
    EXIT_IF(!temp_right,"failed allocation to temp_right array");

    for(size_t i = 0; i<left_length; ++i)
        temp_left[i] = arr[l + i];

    for(size_t j = 0; j<right_length; ++j)
        temp_right[j] = arr[c + 1 + j];

    for(size_t i = 0, j = 0,k = l; k <= r; ++k){
        if((i < left_length) &&
          (j >= right_length || temp_left[i] <= temp_right[j])){
            arr[k] = temp_left[i++];
        }else{
            arr[k] = temp_right[j++];
        }
    }

    free(temp_left);
    free(temp_right);
}
