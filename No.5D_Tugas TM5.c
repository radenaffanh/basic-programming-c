#include <stdio.h>

void main(){
    int a, b;
    a = 15;
    b = 4;

    b++;
    b += a;
    printf("Hasil b += a adalah %d\n", b);
    b -= a;
    printf("Hasil b -= a adalah %d\n", b);
    b *= a;
    printf("Hasil b *= a adalah %d\n", b);
}