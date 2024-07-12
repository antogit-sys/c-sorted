#include <stdio.h>
#include <string.h>
#ifndef GOD_h
#   define GOD_H
#   define STROP(str1, op, str2) ((strcmp(str1, str2) op 0))

#define ASSIGNMENT(type, ...)\
    (type*)assignment_helper((const type[]){__VA_ARGS__}, sizeof((type[]){__VA_ARGS__}) / sizeof(type), sizeof(type))


#define GARROUT(arr, n) _Generic((arr), \
        int*: print_array((arr), (n), "%d "), \
        long*: print_array((arr), (n),"%ld "), \
        long long*: print_array((arr), (n), "%lld "), \
        size_t*: print_array((arr), (n), "%zu "), \
        float*: print_array((arr), (n), "%f "), \
        double*: print_array((arr), (n), "%lf "), \
        char*: print_array((arr), (n), "%c "), \
        char**: print_array((arr), (n), "%s ") \
)

typedef char* string;
void* assignment_helper(const void*, size_t, size_t);
void print_array(void*, size_t, const char*);
#endif
