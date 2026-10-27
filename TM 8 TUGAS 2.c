#include <stdio.h>

int main (){
    float nilai, total = 0, rata, max = 0, min = 0;
    int jumlah_nilai = 0;
    char ulang;
    
    do {
        printf ("Input Nilai: \t");
        scanf("%f", &nilai);

        total += nilai;
        jumlah_nilai++;

        if(jumlah_nilai == 1){
            min = max = nilai;
        } else {
            if (nilai > max) max = nilai;
            if (nilai < min) min = nilai;
            
        }

        
        printf("-----------------\n");
        printf("Nilai Total:\t\t\t %.2f\n", total);

        rata = total/jumlah_nilai;

        printf("Nilai Rata- Rata:\t\t %.2f\n", rata);
        printf("Nilai Data Input Maksimal:\t %.2f\n", max);
        printf("Nilai Data Input Minimal:\t %.2f\n", min);
        printf("-----------------\n");
        
        printf ("Input Data Lagi? (Y/T)");
        scanf (" %c", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
    
    
    return 0;
}

