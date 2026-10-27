#include <stdio.h>

// bubble sort ascending
void bubblesort_asc(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = n - 1; j > 1; j--){
            if (arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

void bubblesort_desc(int arr[], int n){
   int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i; j++){
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j-1] = temp;
            }
        }
    } 
}

void insertionsort_asc(int arr[], int n){
    int i, j, temp;
    for (i = 1; i < n; i++){
        temp = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > temp){
            arr[j - 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}


void insertion_desc(int arr[], int n){
    int i, j, temp;
    for (i = 1; i < n; i++){
        temp = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] < temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void selectionsort_desc(int arr[], int n){
    
}


int main(){
    int arr[] = {10, 2, 7, 6, 61, 5, 12, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf ("array sebelum diurutkan: ");
    for (i = 0; i < n; i++){
        printf("%d",n);
    }
}