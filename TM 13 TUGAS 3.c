#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kalimat[1000];
    int vokal = 0, konsonan = 0;
    char daftar_vokal[100] = "";
    char daftar_konsonan[100] = "";

    printf("Masukkan sebuah kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    for (int i = 0; i < strlen(kalimat); i++) {
        char ch = tolower(kalimat[i]);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') {
                vokal++;
                strncat(daftar_vokal, &kalimat[i], 1);
            } else {
                konsonan++;
                strncat(daftar_konsonan, &kalimat[i], 1);
            }
        }
    }

    printf("Jumlah huruf vokal: %d\n", vokal);
    printf("Huruf vokal     : %s\n", daftar_vokal);
    printf("Jumlah huruf konsonan: %d\n", konsonan);
    printf("Huruf konsonan  : %s\n", daftar_konsonan);

    return 0;
}
