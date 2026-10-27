#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char *str){
    int capitalizenext = 1; //yang akan menjadi indikator apakah karakter berikutnya adalah awal kata
    while(*str){
        if(isspace(*str)){
            capitalizenext = 1;
        }
        else if (capitalizenext && isalpha(*str)){
            *str = toupper(*str); //digunakan untuk mengubah huruf menjadi huruf kapital
            capitalizenext = 0;
        }
        else {
            capitalizenext = 0;
        }
        str++;
    }
}


int main(){
    char string[100];
    printf("Masukkan string: ");
    fgets(string, sizeof(string), stdin);
    capitalize(string);
    printf("Hasil Kapitalisasi: %s\n", string);
    return 0;
}
