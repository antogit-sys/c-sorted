#include <stdio.h>
#include "../../header/sorting.h"

#define N 8

int main(void)
{
   int ordinateArray[N];
   ARRCPY(ordinateArray, insertionSort(EXAMPLE_ARRAY, N), N);
   puts("generic array: ");
   ARROUT(EXAMPLE_ARRAY, N);
   putchar('\n');

   puts("ordinate array: ");
   ARROUT(ordinateArray, N);
   putchar('\n');
   //printf("%s",__FILE__);
return 0;
}
