#include <stdio.h>

int binary_search(int array[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key == array[mid]) 
            return mid;
        else if (key > array[mid]) 
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return -1;
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 15, 20};
    int n = sizeof(array) / sizeof(array[0]);

    int key = 10;
    int result = binary_search(array, 0, n -1, key);
    if (result == -1) 
        printf("Not found");
    else {
        printf("Element is found.\n");
        printf("Index: %d\nPosition: %d\n", result, result+1);
    }

    return 0;
}