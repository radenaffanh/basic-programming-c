#include <stdlib.h>
#include <stdio.h>

void tampilkantextberulang(char text [], int jumlahpengulangan){
    for (int i = 1; i <= jumlahpengulangan; i++){
        printf(" %s\n", text);
    }
}

int main(){
    char text[100];
    int jumlahpengulangan;

    printf("Masukkan text: \n");
    gets(text);
    

    printf("Masukkan jumlah pengulangan:");
    scanf("%d", &jumlahpengulangan);

    printf("\nOutput : \n");
    tampilkantextberulang(text, jumlahpengulangan);
   

    return 0;
}




