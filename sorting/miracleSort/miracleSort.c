#include "../../header/sorting.h"
#define WAIT_MIRACLE() /*in attesa di un miracolo divino*/

int* miracleSort(int* arr, size_t len){
    bool sorted = false;
    int* carray = NEW_ARRAY(int, len);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, len);

    do{
        sorted = true;
        for(int i = 0; i < len-1; ++i){
            if(carray[i] > carray[i+1]){
                WAIT_MIRACLE();
                sorted = false;
                break;
            }
        }
    }while(!sorted);

    return carray;
}
