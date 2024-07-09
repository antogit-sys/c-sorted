#include <stdio.h>
#include "../../header/sorting.h"

#define N 8

int main(void)
{
   int ordinateArray[N];
   puts("generic array: ");
   ARROUT(EXAMPLE_ARRAY, N);
   putchar('\n');

   puts("ordinate array: ");
   puts("in attesa di un miracolo divino...");

   ARRCPY(ordinateArray, miracleSort(EXAMPLE_ARRAY, N), N);
   ARROUT(ordinateArray, N);
   putchar('\n');
   
return 0;
}
