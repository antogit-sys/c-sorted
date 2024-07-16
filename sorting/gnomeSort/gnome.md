# Gnome sort

**DESCRIZIONE**

**Gnome Sort** è un algoritmo di ordinamento molto simile all'Insertion sort. Gnome Sort si basa sulla divisione della struttura dati in due sottoliste: una ordinata e una non ordinata. Per ogni ciclo, l'algoritmo seleziona un elemento della sottolista non ordinata e lo sposta con scambi sequenziali nella posizione corretta nella sottolista ordinata.

La differenza principale rispetto all'Insertion Sort è che l'implementazione non richiede cicli annidati. Come l'Insertion Sort, questo algoritmo è più efficiente su piccole strutture di dati quasi ordinate.

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n^2)$        |
| miglior caso | $O(n)$          |
| peggior caso | $O(n^2)$        |



**codice**:

```c
#include "../../header/sorting.h"

int* gnomeSort(int* arr, size_t length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    for(size_t i = 0; i<length;){
        if(i == 0) ++i; //next pos

        if(array[i] >= carray[i-1]) ++i; //next pos if current >= prev
        else{
            SWAP_VALUE(carray[i], carray[i-1]); //change current pos with prev pos 
            --i; //prev position
        }
    }

    return carray;
}

```


