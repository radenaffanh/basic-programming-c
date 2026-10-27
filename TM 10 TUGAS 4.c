#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hitung_kata(char *str) {
    int count = 0;
    int dalamKata = 0;

    while (*str) {
        if (!isspace(*str) && !dalamKata) {
            dalamKata = 1; //isspace untuk deteksi spasi dll
            count++;
        } else if (isspace(*str)) {
            dalamKata = 0;
        }
        str++;  // pindah ke karakter berikutnya
    }

    return count;
}

int main() {
    char kalimat[100];

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    int jumlah = hitung_kata(kalimat);
    printf("Jumlah kata: %d\n", jumlah);

    return 0;
}
