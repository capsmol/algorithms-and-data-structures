#include <stdio.h>

void insertionSort(int arr[], int length) {
    for (int j = 1; j < length; j++) {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
            arr[i + 1] = key;
        }
    }
};

void invertInsertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int key = arr[i]; // tmp variable
        int j = i - 1;
        while(j >= 0 && key > arr[j]) {
            arr[j + 1] = arr[j];
            j--;
            arr[j + 1] = key;
        }
    }
};

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, length);
    invertInsertionSort(arr, length);
    
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}