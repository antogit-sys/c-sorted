# Counting Sort

**DESCRIZIONE**

****Counting Sort**** è un algoritmo di ordinamento ****non basato sul confronto**** che funziona bene quando l'intervallo di valori di input è limitato. È particolarmente efficiente quando l'intervallo dei valori di input è piccolo rispetto al numero di elementi da ordinare. L'idea di base dietro ****Counting Sort**** è contare la ****frequenza**** di ciascun elemento distinto nell'array di input e utilizzare tali informazioni per posizionare gli elementi nelle posizioni di ordinamento corrette.

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n+k)$        |
| peggior caso | $O(n+k)$        |
| miglior caso | $O(n+k)$        |

dove n è il numero di elementi dell'array, e k è l'intervallo dei valori chiave non negativi



**codice:**

countingSort.c

```c
#include "../../header/sorting.h"

int* countingSort(int* arr, size_t dim){
    int* carray, *count;
    int max; 

    EXIT_IF(dim == 0, "size not valid");

    carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray, "Failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    max = found_max(carray, dim);

    count = NEW_ARRAY(int, max+1);
    EXIT_IF(!count, "Failed allocation to count array");

    /* count occurrence for each value to array */
    for(size_t i = 0; i < dim; ++i){
        count[carray[i]]++;
    }

    /* rebuilding sorted array */
    int index = 0;
    for (int i = 0; i <= max; i++){
        while(count[i] --> 0){
            carray[index++] = i;
            //count[i]--;
        }
    }
    
    free(count);

    return carray;
}

```

c-sorted/utility/utility.c

```c
#include "../header/sorting.h"

int found_max(int* arr, size_t length){
    int max = arr[0];

    for(size_t i = 1; i < length; ++i){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

```


