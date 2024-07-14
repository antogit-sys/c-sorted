# Bubble Sort

**DESCRIZIONE**

Bubble Sort è un algoritmo di ordinamento iterativo che **imita il movimento delle bolle** nell'acqua frizzante. Le bolle rappresentano gli elementi della struttura dati.

Le bolle più grandi raggiungono la cima più velocemente di quelle più piccole e questo algoritmo funziona allo stesso modo. Itera attraverso la struttura dei dati e per ogni ciclo confronta l'elemento corrente con quello successivo, scambiandoli se sono nell'ordine sbagliato.

*È un algoritmo semplice da implementare, ma poco efficiente*: in media, algoritmi di ordinamento quadratico con la stessa complessità temporale come *Selection Sort o Insertion Sort hanno prestazioni migliori.*
Ha diverse varianti per migliorare le sue prestazioni, come Shaker Sort, Odd Even Sort e Comb Sort.   

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | $O(n^2)$        |
| miglior caso | $O(n)$          |
| peggior caso | $O(n^2)$        |



**codice**:

```c
int* bubbleSort(int* arr, size_t dim){
    int* carray = NEW_ARRAY(int, dim);
    EXIT_IF(!carray,"Failed allocation to array");
    
    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, dim);

    /* Descending order  (<) - Bubble sort*/
    for(int i = 0; i < dim-1; ++i){
        for(int j = 0; j < dim-i-1; ++j){
            if(carray[j] < carray[j+1]){
                SWAP_VALUE(carray[j], carray[j+1]);
            }
        }
    }

    return carray;
}

```


