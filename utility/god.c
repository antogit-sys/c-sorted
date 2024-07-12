#include "../header/sorting.h"
#include "../header/god.h"

void* assignment_helper(const void* arr, size_t size, size_t elem_size) {
    void* _tmp_arr = calloc(size, elem_size);
    EXIT_IF(!_tmp_arr, "Failed to allocate memory for array");
    memcpy(_tmp_arr, arr, size * elem_size);
    return _tmp_arr;
}

void print_array(void* arr, size_t length, const char* format){
    for (size_t i = 0; i < length; ++i){
        if(STROP(format, == ,"%d "))
            fprintf(stdout, format, ((int*)arr)[i]);
        else if(STROP(format, == ,"%ld "))
            fprintf(stdout, format, ((long*)arr)[i]);
        else if(STROP(format, == ,"%lld "))
            fprintf(stdout, format, ((long long*)arr)[i]);
        else if(STROP(format, == ,"%zu "))
            fprintf(stdout, format, ((size_t*)arr)[i]);
        else if(STROP(format, == ,"%f "))
            fprintf(stdout, format, ((float*)arr)[i]);
        else if(STROP(format, == ,"%lf "))
            fprintf(stdout, format, ((double*)arr)[i]);
        else if(STROP(format, == ,"%c "))
            fprintf(stdout, format, ((char*)arr)[i]);       
        else if(STROP(format, == ,"%s "))
            fprintf(stdout, format, ((char**)arr)[i]);
        else{
            fprintf(stderr,"%s","format nod valid!");
            break;
        }
    }
    putchar('\n');
}

