# OddEven Sort

**DESCRIZIONE**

Odd Even Sort (noto anche come Brick Sort) è un algoritmo di ordinamento in-place basato su confronti. **Divide la struttura dati in coppie composte da elementi con indici pari e indici dispari rispettivamente.**

Confronta le coppie adiacenti e le scambia se sono nell'ordine sbagliato con un algoritmo simile a Bubble sort . *Questa procedura continua per ogni coppia, alternando coppie dispari/pari e pari/dispari finché la struttura non è ordinata.*

Questo algoritmo può essere eseguito su processori paralleli, ma non è ampiamente utilizzato. Può essere performante se la struttura dati è quasi ordinata, ma è molto lento se ci sono piccoli elementi vicino alla fine della struttura dati, poiché richiederanno molte iterazioni per essere spostati nel posto giusto.

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n^2)$        |
| miglior caso | $O(n)$          |
| peggior caso | $O(n^2)$        |

**codice**:

```c
#include "../../header/sorting.h"

int* oddEvenSort(int* arr, size_t length){
    bool sorted = false;
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array !!!");

    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    while(!sorted){
        sorted = true;

        /* sorting to odd index (dispari)*/
        for(size_t i = 1; i<length-1; i+=2){
            if(carray[i] > carray[i+1]){
                SWAP_VALUE(carray[i], carray[i+1]);
                sorted = false;
            }
        }

        /*sorting to even index (pari)*/
        for(size_t i = 0; i < length-1; i+=2){
            if (carray[i] > carray[i+1]){
                SWAP_VALUE(carray[i], carray[i+1]);
                sorted = false;
            }
        }
    }

    return carray;
}
```
