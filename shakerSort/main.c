#include <stdio.h>
#include "../header/sorting.h"

#define N 8

int main(void)
{
   int array[N];
   
   ARRCPY(array, shakerSort(EXAMPLE_ARRAY, N), N);
      
   puts("generic array: ");
   ARROUT(EXAMPLE_ARRAY, N);
   putchar('\n');

   puts("ordinate array: ");
   ARROUT(array, N);
   putchar('\n');

return 0;
}
