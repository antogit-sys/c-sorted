# Selection sort

**DESCRIZIONE**

**Selection Sort** è un algoritmo di ordinamento iterativo e in-place che divide la struttura dati in due sottoliste: quella ordinata e quella non ordinata. L'algoritmo esegue un ciclo per tutti gli elementi della struttura dati e **per ogni ciclo sceglie l'elemento più piccolo della sottoliste non ordinata e lo aggiunge alla sottoliste ordinata**, riempiendola progressivamente.

Si tratta di un algoritmo molto semplice e intuitivo che non richiede memoria aggiuntiva, ma non è molto efficiente su grandi strutture di dati a causa della sua complessità temporale quadratica.

Questo algoritmo è stato aggiornato e migliorato in diverse varianti, come *Heap Sort*

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n^2)$        |
| miglior caso | $O(n^2)$        |
| peggior caso | $O(n^2)$        |



**codice:**

selectionSort.c

```c
#include "../../header/sorting.h"

int* selectionSort(int* arr, size_t length){
    int posmin;
    int* carray = NEW_ARRAY(int, length);
    
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    /* Found min to array */
    for(size_t i = 0; i<length-1; ++i){
        posmin = found_min_position(carray, i, length);
        SWAP_VALUE(carray[i], carray[posmin]);
    }

    return carray;
}

```



c-sorted/utility/utility.c

```c
int found_min_position(int* arr, size_t minRange, size_t maxRange){
    int minpos = minRange;

    EXIT_IF(minRange > maxRange, "Error index");
    
    for(size_t i = minRange+1; i<maxRange; ++i){
        if(arr[i] < arr[minpos])
            minpos = i;
    }
    return minpos;
}

```


