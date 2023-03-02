#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 4, 3, 2, 1};
    int n = 5;
    int sum = sum_of_arrays(array1, array2, n);
    printf("%d\n", sum);  
    /*this is output*/
    return 0;
}