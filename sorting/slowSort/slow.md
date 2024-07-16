# Slow Sort

Lo **Slow sort** è un algoritmo di ordinamento teorico progettato per essere estremamente inefficiente. Si basa su un principio scherzoso chiamato **"moltiplica e resa"**, un gioco di parole che contrasta con il più noto e efficiente principio del *"divide et impera"*. Invece di dividere il problema in parti più piccole per risolverle in modo efficiente, lo slow sort moltiplica i problemi attraverso ripetute ricorsioni inutili.



#### Complessità

Il tempo di esecuzione T(n) per Slowsort è descritto dall'equazione ricorsiva:

$T(n)=2T(n/2)+T(n−1)+1$



Una stima inferiore asintotica per T(n) in notazione di Landau è:

Ω (n^ (Log2(n)/(2+ϵ) )

per ogni ϵ>0.



Pertanto, Slowsort non è in tempo polinomiale. Addirittura, nel caso migliore è peggiore di Bubble sort.
