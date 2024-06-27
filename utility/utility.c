#include "../header/sorting.h"

int found_max(int* arr, size_t dim){
    int max = arr[0];

    for(size_t i = 1; i < dim; ++i){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
