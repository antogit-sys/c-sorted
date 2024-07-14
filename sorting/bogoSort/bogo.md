# Bogo sort

**DESCRIZIONE**
Bogo Sort (chiamato anche **Stupid Sort** o **Monkey Sort**, o ancora **Random sort**) è un algoritmo di ordinamento iterativo particolarmente inefficiente. Si basa sul rimescolamento casuale degli elementi della struttura dati e quindi sul controllo se sono ordinati correttamente. In caso contrario, ripetere il processo.

È un algoritmo probabilistico. La quantità di possibili permutazioni di una struttura dati di n elementi è n!, quindi occorrono in media n! mescolamenti per raggiungere la soluzione. Ogni mescolamento richiede n operazioni, quindi il numero medio totale di operazioni è n × n! (dove n sono gli elementi dell'array)

Poiché le sue prestazioni dipendono interamente dalla probabilità, la complessità del caso peggiore non è misurabile.

| Complessità  | Notazione Big O |
| ------------ | --------------- |
| media        | O(n × n!)       |
| miglior caso | O(n)            |
| peggior caso | ∞               |

**codice**:

```c
int* bogoSort(int* arr, size_t length){
    static bool srand_init = false;
    int* carray = NEW_ARRAY(int, length);
    EXIT_IF(!carray,"failed allocation to array");

    /* The functions operate to copy, not original array */
    ARRCPY(carray, arr, length);

    if(!srand_init){
        srand(time(NULL));
        srand_init = true;
    }

    /* continua a mescolare l'array finchè non si ordina */
    while(!__is_sorted(carray, length))
        __shuffle(carray, length);

    return carray;
}

bool __is_sorted(int* arr, size_t length){
    bool done = true;
    while(length --> 0){
        if(arr[length] < arr[length-1])
            done = false;
    }
    return done;
}

void __shuffle(int* arr, size_t length){
    int randpos;

    for(size_t i = 0; i<length; ++i){
        randpos = rand()%length;
        SWAP_VALUE(arr[i], arr[randpos]);
    }
}
```
