#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#ifndef SORTING_H
#   define SORTING_H
#   define EXAMPLE_ARRAY            (int[]){4, 2, 5, 1, 3, 14, 32, 10} //letterale composto
#   define NEW_ARRAY(type, length)     ((type*)calloc(length, sizeof(type)))
#   define ARRCPY(dest, src, size)  for(size_t i=0; i<size; ++i) dest[i]=src[i]
#   define ARROUT(v,n)              for(size_t i=0; i<n; ++i) printf("%d ",v[i])
#   define SETK(array, pos, k)      ((k * (array[pos]-array[pos+1]))>0)

#   define SWAP_VALUE(v1, v2) do \
        { int temp=v1; \
          v1 = v2; \
          v2 = temp; \
        }while(0)

#   define EXIT_IF(c, s) do{ \
        if((c)){ \
            perror(s); \
            exit(EXIT_FAILURE); \
        } \
    }while(0)

int found_max(int*,size_t);

// - - - - - - - -
 
int* leadSort(int*, size_t);
int* bubbleSort(int*, size_t);
int* bubbleSortK(int*, size_t, short);
int* shakerSort(int*, size_t);
int* shakerSortK(int*, size_t, short);
int* countingSort(int*, size_t);
#endif
