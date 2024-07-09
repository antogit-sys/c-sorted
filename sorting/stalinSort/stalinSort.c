#include "../../header/sorting.h"

unsigned stalinSort(int* arr, unsigned len){
    unsigned newlen = 1;  // Indice per tenere traccia dell'array ordinato
    int max = arr[0];  // Manteniamo traccia del massimo visto finora

    for(unsigned i = 1; i < len; ++i){
        if(arr[i] >= max){
            // Trovato un elemento che è più grande o uguale al massimo visto finora
            arr[newlen] = arr[i];  // Manteniamo questo elemento nell'array ordinato
            max = arr[i];  // Aggiorniamo il massimo visto finora
            ++newlen;  // Avanziamo nell'array ordinato
        }
        // Se arr[i] è minore di max, lo ignoriamo e passiamo all'elemento successivo
    }

    return newlen;  //ritorno nuova dimensione
}

