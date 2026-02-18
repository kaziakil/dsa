#include <stdio.h>

void linear_search(int array[], int n, int key) {
    int found = 0;
    for (int i=0; i<n; i++) {
        if (array[i] == key) {
            printf("The element is found.\n");
            printf("Index: %d\nPosition: %d\n", i, i+1);
            found = found + 1;
        }
    }
    if (found == 0) 
        printf("The element is not found.");
    
}

int main() {
    // int n = 6; // array size
    int array[] = {10, 20, 50, 60, 90, 30};
    int n = sizeof(array) / sizeof(array[0]);

    int key = 50;
    linear_search(array, n, key);

    return 0;
}