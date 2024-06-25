#include <stdio.h>
#include "../header/sorting.h"

#define N 8

int main(void)
{
   int ordinateDecrescent[N];
   //int ordinateCrescent[N];

   ARRCPY(ordinateDecrescent, shakerSort(EXAMPLE_ARRAY, N), N);
   //ARRCPY(ordinateCrescent, bubbleSortK(EXAMPLE_ARRAY, N, 1), N);
   
   puts("generic array: ");
   ARROUT(EXAMPLE_ARRAY, N);
   putchar('\n');

   //puts("Crescent ordinate array (k = 1): ");
   //ARROUT(ordinateCrescent, N);
   //putchar('\n');

   puts("Decrescent ordinate array (k = -1): ");
   ARROUT(ordinateDecrescent, N);
   putchar('\n');

return 0;
}
