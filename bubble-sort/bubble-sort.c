#include <stdio.h>

void bubble_sort(int array[], int size) {
    for (int i=0; i<size-1; i++) {
        int swap = 0;
        for (int j=0; j<size-i-1; j++) {
            if (array[j] > array[j+1]) {
            int temp;
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            swap = 1;
            }
        }
        if (swap == 0) 
            break;
    }
}

int main() {
    int array[] = {99, 11, 66, 55, 77, 44, 33, 22, 88};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array before sorting:   ");
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);

    bubble_sort(array, size);
    printf("\nArray after sorting:    ");
    for (int i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n");
    return 0;
}