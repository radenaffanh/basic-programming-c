#include <stdio.h>

typedef struct{
    int nim;
    float ipk;
} mahasiswa;

mahasiswa m;
mahasiswa *p = &m;

int main (){
    m.nim = 162;
    m.ipk = 3.80;
    printf("nim = %d \n", m.nim);
    printf("ipk = %.2f\n", m.ipk);

    p->ipk = 3.02;
    p->nim = 4188;
    printf("nim = %d\n", p->nim);
    printf("nim = %.2f\n", p->ipk);

    m.nim = 241037;
    m.ipk = 4.0;
    printf("nim = %d \n", m.nim);
    printf("ipk = %.2f\n", m.ipk);

}