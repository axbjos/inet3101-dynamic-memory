#include <stdio.h>
#include <stdlib.h>

struct myStruct {

    char myChar;
    int myInt;

};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int num_elements = atoi(argv[1]);
    struct myStruct* myArray = (struct myStruct*)malloc(num_elements * sizeof(struct myStruct));

    printf("Size of structure malloc is: %lu", sizeof(myArray));

    int y;
    char x;

    printf("Please enter %d element each with: one char and one int:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf(" %c %d", &x, &y);
        myArray[i].myChar = x;
        myArray[i].myInt = y;
        printf("\nYou entered: %c %d and the index is %d\n", myArray[i].myChar, myArray[i].myInt, i);
    }
    /*for (int i = 0; i < num_elements; i++) {
        myArray[i].myChar = 'a';
        myArray[i].myInt = i;
    }*/

    //printf("Struct data in the array:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("\n%c %d", myArray[i].myChar, myArray[i].myInt);
    }

    printf("\n");

    free(myArray);
    return 0;

}