#include <stdio.h>
#include <stdlib.h>

int main() {

    int *array1 = (int *)malloc(4 * sizeof(int));

    //int array2[4];

    printf("\n\nIndex 0 of the memory allocation starts at: %p" , &array1[0]);
    printf("\n\nIndex 1 of the memory allocation starts at: %p" , &array1[1]);

    printf("\n\nValue at index 0 is %d: ", array1[0]);
    printf("\n\nValue at index 1 is %d: ", array1[1]);

    printf("\n\n");

}