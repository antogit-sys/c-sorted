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


