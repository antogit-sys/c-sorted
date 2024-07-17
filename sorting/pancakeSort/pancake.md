# Pancake Sort

**DESCRIZIONE** 
**Pancake Sort** è un algoritmo di ordinamento che deriva dal problema del pancake. L'algoritmo esegue semplicemente l'operazione di capovolgimento in modo ricorsivo fino a quando la struttura dei dati non viene ordinata. È simile all'ordinamento della selezione, senza utilizzare gli scambi per ordinare la struttura, ma semplicemente capovolge.

La struttura dei dati viene divisa in due parti, una ordinata e una ancora da ordinare. Per ogni capovolgimento, il numero massimo di elementi della sottolista non ordinata viene inserito alla fine della struttura dati capovolgendo la parte non ordinata e la sottolista ordinata viene incrementata di uno. Questa procedura viene eseguita finché la parte non ordinata è composta da un solo elemento.

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n^2)$        |
| miglior caso | $O(n^2)$        |
| peggior caso | $O(n^2)$        |



**Codice:**

pancakeSort.c

```c
#include "../../header/sorting.h"

int* pancakeSort(int* arr, size_t dim){
    int maxIndex;
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"Failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    /* Descending order  (<)*/
    do{
        maxIndex = found_max_position(carray, 0, dim);
        if (maxIndex != dim) {
            flip(carray, maxIndex);
            flip(carray, dim - 1);
        }
        
    }while (dim --> 1);

    return carray;
}

void flip(int* arr, size_t k){
    int left = 0;
    while (left < k) {
        SWAP_VALUE(arr[left], arr[k]);
        left++;
        k--;
    }
}

```

c-sorted/utility/utility.c

```c
int found_max_position(int* arr, size_t minRange, size_t maxRange){
    int maxpos = minRange;

    EXIT_IF(minRange > maxRange, "Error index");

    for(size_t i = minRange+1; i<maxRange; ++i){
        if(arr[i] > arr[maxpos])
            maxpos = i;
    }
    return maxpos;
}

```


