#include "../header/sorting.h"

int found_max(int* arr, size_t length){
    int max = arr[0];

    for(size_t i = 1; i < length; ++i){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int found_min(int* arr, size_t length){
    int min = arr[0];

    for(size_t i = 1; i < length; ++i){
        if(arr[i] < min) 
            min = arr[i];
    }
    return min;
}

int found_min_position(int* arr, size_t minRange, size_t maxRange){
    int minpos = minRange;

    EXIT_IF(minRange > maxRange, "Error index");
    
    for(size_t i = minRange+1; i<maxRange; ++i){
        if(arr[i] < arr[minpos])
            minpos = i;
    }
    return minpos;
}

int found_max_position(int* arr, size_t minRange, size_t maxRange){
    int maxpos = minRange;

    EXIT_IF(minRange > maxRange, "Error index");

    for(size_t i = minRange+1; i<maxRange; ++i){
        if(arr[i] > arr[maxpos])
            maxpos = i;
    }
    return maxpos;
}

