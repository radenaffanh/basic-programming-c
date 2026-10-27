#include <stdio.h>
#include <string.h>

int main(){
    char kata[] = "UNIVERSITAS";
    char cari_huruf;
    char *pointer_kata;
    int huruf_ketemu = 0;

    printf("kata: %s\n", kata);
    //fgets(kata, sizeof(kata), stdin);

    printf("masukkan huruf yang ingin dicari: ");
    scanf(" %c", &cari_huruf);

    pointer_kata = kata;

    while(*pointer_kata != '\0' ){
        if(*pointer_kata == cari_huruf){
            huruf_ketemu = 1;
            break;
        }
        pointer_kata++;
    }

    if(huruf_ketemu){
        printf("huruf %c ditemukan\n", cari_huruf);
    }else {
        printf("huruf %c tidak ditemukan\n", cari_huruf);
    }

    return 0;

}
