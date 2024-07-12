#include "../../header/sorting.h"

int* stalinSort(int* arr, size_t* len){
    size_t newlen = 1;  // Indice per tenere traccia dell'array ordinato
    int max = arr[0];  // Manteniamo traccia del massimo visto finora

    for(unsigned i = 1; i < *len; ++i){
        if(arr[i] >= max){
            // Trovato un elemento che è più grande o uguale al massimo visto finora
            arr[newlen] = arr[i];  // Manteniamo questo elemento nell'array ordinato
            max = arr[i];  // Aggiorniamo il massimo visto finora
            ++newlen;  // Avanziamo nell'array ordinato
        }
    }
    
    for(size_t i = newlen; i<*len; ++i)
        arr[i] = 0;
    
    arr = (int*)realloc(arr, newlen*sizeof(int));
    EXIT_IF(!arr,"Failed reallocation to array");

    *len = newlen;

    return arr; 
}

