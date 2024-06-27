
int foubnd_max(int* arr, size_t dim){
    int max = arr[0];

    for(size_t i = 1; i < dim; ++i){
        if(arr[i] > arr[i+1])
            max = arr[i];
    }
    return max;
}
