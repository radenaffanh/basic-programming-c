#include <stdio.h>
#include <string.h>

int main (){
   char kalimat[1000]; // maksimal 100 karakter
   char ulang;

   do{
    int jumlah_karakter = 0;
    int jumlah_spasi = 0;

    printf ("Input kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);
    //kalimat[strcspn(kalimat, "\n")] = '\0';

    for (int i = 0; kalimat[i] != '\0'; i++){
        if (kalimat[i] == '\n') break;
        jumlah_karakter++;
        if (kalimat[i] == ' ') jumlah_spasi++;
    }

    printf("---------------\n");
    printf("jumlah karakter : %d\n", jumlah_karakter);
    printf("jumlah spasi    : %d\n", jumlah_spasi);
    printf("---------------\n");

    printf("Input kalimat Lagi ? (Y/T) ");
    scanf(" %c", &ulang);
    getchar(); // Buang enter

} while (ulang == 'Y' || ulang == 'y');

return 0;
}

