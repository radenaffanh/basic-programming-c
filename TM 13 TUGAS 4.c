#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    const char input;
    int data[100], n;

    printf("Masukkan NIP/NIK: ");
    scanf("%d", input);

    n = strlen(input);
    for(int i = 0; i < n; i++) {
        data[i] = input[i] - '0'; // Ubah char ke int
    }

    printf("\nPilih metode sorting:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    int pilihan;
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1: bubbleSort(data, n); break;
        case 2: selectionSort(data, n); break;
        case 3: insertionSort(data, n); break;
        default: printf("Pilihan tidak valid.\n"); return 1;
    }

    printf("Hasil setelah sorting: ");
    for(int i = 0; i < n; i++) {
        printf("%d", data[i]);
    }
    printf("\n");

    return 0;
}
