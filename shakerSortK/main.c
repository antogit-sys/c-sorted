#include <stdio.h>
#include "../header/sorting.h"

#define N 8

int main(void)
{
   int arrayCrescent[N];
   int arrayDecrescent[N];
   
   ARRCPY(arrayCrescent, shakerSortK(EXAMPLE_ARRAY, N, 1), N);
   ARRCPY(arrayDecrescent, shakerSortK(EXAMPLE_ARRAY, N, -1), N);

   puts("generic array: ");
   ARROUT(EXAMPLE_ARRAY, N);
   putchar('\n');

   puts("ordinate crescent array (k = 1): ");
   ARROUT(arrayCrescent, N);
   putchar('\n');

   puts("ordinate decrescent array (k = -1): ");
   ARROUT(arrayDecrescent, N);
   putchar('\n');

return 0;
}
