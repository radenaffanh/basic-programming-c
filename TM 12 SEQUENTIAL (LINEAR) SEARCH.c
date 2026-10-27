#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int data[MAX];

int sequentialsearch (int x){
    int i = 0;
    bool ketemu = false;
    while ((!ketemu) && (i<MAX)){
        if(data[i] == x){
            ketemu = true;
        }else {
            i++;
        }
    }
    if (ketemu){
        return i;
    } else {
        return -1;
    }
}

void main (){
    int i;
    srand (0);
    printf("\nData  :");
    for (i = 0; i < MAX; i++){
        data[i] = rand()/1000 + 1;
        printf("%d ", data[i]);
    }
    int kunci;
    printf ("\nkunci :");
    scanf("%d", &kunci);

    int ketemu = sequentialse1arch(kunci);
    if (ketemu>0){
        printf("Data ditemukan pada posisi %d", ketemu);
    }else {
        printf("Data tidak ditemukan");
    }
}