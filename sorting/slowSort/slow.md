# Slow Sort

Lo **Slow sort** è un algoritmo di ordinamento teorico progettato per essere estremamente inefficiente. Si basa su un principio scherzoso chiamato **"moltiplica e resa"**, un gioco di parole che contrasta con il più noto e efficiente principio del *"divide et impera"*. Invece di dividere il problema in parti più piccole per risolverle in modo efficiente, lo slow sort moltiplica i problemi attraverso ripetute ricorsioni inutili.

#### Complessità

Il tempo di esecuzione T(n) per Slowsort è descritto dall'equazione ricorsiva:

$T(n)=2T(n/2)+T(n−1)+1$

Una stima inferiore asintotica per T(n) in notazione di Landau è:

Ω (n^ (Log2(n)/(2+ϵ) )

per ogni ϵ>0.

Pertanto, Slowsort non è in tempo polinomiale. Addirittura, nel caso migliore è peggiore di Bubble sort.



#### Codice

```c
#include "../../header/sorting.h"

int* slowSort(int* arr, long length){
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    __slow_sort_recursion(carray, 0, length-1);

    return carray;
}

void __slow_sort_recursion(int* arr, long left, long right){
    if(left < right){
        long c = __CENTER_ARR(left, right);
        /* divide tutto in sotto array di sotto array*/
        __slow_sort_recursion(arr, left, c);
        __slow_sort_recursion(arr, c + 1, right);

        if (arr[right] < arr[c])
            SWAP_VALUE(arr[right], arr[c]);
             
        __slow_sort_recursion(arr, left, right-1);
    }
}

```
