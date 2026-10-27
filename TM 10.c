#include <stdio.h>

int main(){
    float nilai[3], *petunjuk;
    nilai[0] = 220;
    nilai[1] = 641;
    nilai[2] = 53;
    petunjuk = &nilai[0];
        printf("Nilai %.2f ada di alamat %p\n", *petunjuk, petunjuk);
        printf("Nilai %.2f ada di alamat %p\n", *(petunjuk+1), petunjuk+1);
        printf("Nilai %.2f ada di alamat %p\n", *(petunjuk+2), petunjuk+2);
    return 0;
}