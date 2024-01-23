#include <stdio.h>

int main() {

    int array[] = {1, 2, 3, 4, 5};
    int* pointer = array;

    printf("printing the array\n");

    int i = 0;
    for(i = 0; i < 5; i++) {
        printf("index %d is %d\n", i, array[i]);

        printf("index %d is at %p\n", i, &array[i]);
    }

    // accessing array using pointer arithmetic.
    
    for(i = 0; i < 5; i++) {
        printf("index %d is %d\n", i, *(pointer + i));

        printf("index %d is at %p\n", i, pointer + i);
        
    }

    return 0;
}
