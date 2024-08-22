#include "../../header/sorting.h"

int* quickSortRK(int* arr,long length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    /* begin position = 0 | end position = length-1*/
    __quick_sort_recursionk(carray, 0, length - 1);

    return carray;
}

void __quick_sort_recursionk(int* arr, long low, long high){
    long middle;

    if(low >= high) return;
    middle = __splitk(arr, low, high);
    __quick_sort_recursionk(arr, low, middle-1);
    __quick_sort_recursionk(arr, middle+1, high);
}

long __splitk(int* arr, long l, long h){
    long part_element = arr[l];

    for(;;){
        /*
         * Riassunto della dinamica:
         *  - Da destra a sinistra: La funzione cerca un elemento che 
         *    sia più piccolo del pivot e lo sposta a sinistra.
         *
         *  - Da sinistra a destra: La funzione cerca un elemento che 
         *    sia più grande del pivot e lo sposta a destra.
         */

        // SCORRE DA SX A DX
        while(l < h && part_element <= arr[h]) h--;
        if(l >= h) break;  
        arr[l++] = arr[h]; //Se l è ancora inferiore a h, l'elemento a destra dell'array (
                           //cioè arr[h]) viene copiato nella posizione di arr[l].

        //SCORRE DA DX A SX
        while(l < h && arr[l] <= part_element) l++;
        if(l >= h) break; 
        arr[h--] = arr[l]; 
    }
    arr[h] = part_element; 
    return h;
}
