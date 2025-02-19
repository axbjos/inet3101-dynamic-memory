#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int num_elements = atoi(argv[1]);
    int *array = (int *)malloc(num_elements * sizeof(int));

    printf("Please enter %d numbers:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &array[i]);
    }

    printf("Numbers in the array:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0