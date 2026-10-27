#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char huruf[6];  
    char angka;
} T9;

typedef struct {
    char elemen[100];
    int jml_kata;
} Kata;

Kata kata;
Kata *p_kata = &kata;


T9 tabel_t9[] = {
    {"ABC", '2'},
    {"DEF", '3'},
    {"GHI", '4'},
    {"JKL", '5'},
    {"MNO", '6'},
    {"PQRS", '7'},
    {"TUV", '8'},
    {"WXYZ", '9'},
    {" ", '#'}
   
};

int main() {
    char kalimat[100];
    p_kata->jml_kata = 0;
    char *p = p_kata->elemen;

    printf("Masukkan sebuah kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = 0;

    for (int i = 0; kalimat[i] != '\0'; i++) {
        *p = kalimat[i];
        p_kata->jml_kata++;
        p++;
    }

    p = p_kata->elemen;

    for (int i = 0; i < p_kata->jml_kata; i++) {
        char c = toupper(p[i]);

        
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            continue;
        }

        
        for (int j = 0; j < sizeof(tabel_t9) / sizeof(T9); j++) {
            if (strchr(tabel_t9[j].huruf, c)) {
                printf("%c", tabel_t9[j].angka);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
