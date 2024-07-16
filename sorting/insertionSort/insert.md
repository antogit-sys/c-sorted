# Insert Sort

**DESCRIZIONE**

**l'insertion Sort** o **Insert Sort** o ancora **Naïve Soert** è un semplice algoritmo di ordinamento che crea l'array ordinato finale un elemento alla volta. È meno performante degli algoritmi di ordinamento avanzati, ma può comunque avere alcuni vantaggi: è davvero facile da implementare ed è efficiente su piccole strutture dati quasi ordinate. 

*L'algoritmo divide la struttura dei dati in due sottoliste: una ordinata, ed una ancora da ordinare*. Inizialmente la sottolista ordinata è composta da un solo elemento e si riempie progressivamente. Per ogni iterazione, l'algoritmo sceglie un elemento dalla sottolista non ordinata e lo inserisce nel posto giusto nella sottolista ordinata. È disponibile in diverse varianti come *Gnome Sort.*

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n^2)$        |
| miglior caso | $O(n)$          |
| peggior caso | $O(n^2)$        |

**codice:**

```c
#include "../../header/sorting.h"

int* insertionSort(int* arr, size_t length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");

    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    for(size_t i = 1; i < length; ++i){
        int key = carray[i]; //current pos
        int j = i - 1; //prev pos

        while (j >= 0 && carray[j] > key){
            //sposto a destra carray[j]
            carray[j + 1] = carray[j];
            --j; //mi sposto a sinistra per confrontare k
        }
        carray[j + 1] = key;
    }

    return carray;
}
```
