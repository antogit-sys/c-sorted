#include <stdio.h>
#include <stdlib.h>
#include "../../header/sorting.h"

#define N 8

int main(void)
{
   int ordinateArray[N];
   
   ARRCPY(ordinateArray, bogoSort(EXAMPLE_ARRAY, N), N);
   
   puts("generic array: ");
   ARROUT(EXAMPLE_ARRAY, N);
   putchar('\n');

   puts("ordinate array: ");
   ARROUT(ordinateArray, N);
   putchar('\n');
   

return 0;
}
