#include "../../header/sorting.h"

int* bogoSort(int* arr, size_t length){
    static bool srand_init = false;
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    if(!srand_init){
        srand(time(NULL));
        srand_init = true;
    }

    /* continua a mescolare l'array finchè non si ordina */
    while(!__is_sorted(carray, length))
        __shuffle(carray, length);

    return carray;
}

bool __is_sorted(int* arr, size_t length){
    bool done = true;
    while(length --> 0){
        if(arr[length] < arr[length-1])
            done = false;
    }
    return done;
}

void __shuffle(int* arr, size_t length){
    int randpos;

    for(size_t i = 0; i<length; ++i){
        randpos = rand()%length;
        SWAP_VALUE(arr[i], arr[randpos]);
    }
}
