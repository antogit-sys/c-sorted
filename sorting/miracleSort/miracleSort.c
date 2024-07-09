#include "../../header/sorting.h"
#define WAIT_MIRACLE() /*in attesa di un miracolo divino*/

int* miracleSort(int* arr, size_t len){
    bool sorted = false;
    int* carray = NEW_ARRAY(int, len);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, len);

    while(!sorted){
        for(int i = 0; i < len-1; ++i){
            sorted = false;
            if(carray[i] > carray[i+1]){
                WAIT_MIRACLE();
                sorted = true;
            }
        }
    }

    return carray;
}
