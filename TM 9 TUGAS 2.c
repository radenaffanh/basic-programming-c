#include <stdlib.h>
#include <stdio.h>

int penjumlahan(int x, int y){
    return (x+y);
}
int pengurangan(int x, int y){
    return (x-y);
}
int perkalian(int x, int y){
    return (x*y);
}
float pembagian(float x, float y){
    return (x/y);
}

int main(){
    int hasil;
    float hasil_bagi;
    printf ("Menu :\n");
	printf ("\t 1. Penjumlahan\n");
	printf ("\t 2. Pengurangan\n");
	printf ("\t 3. Perkalian\n");
    printf ("\t 4. Pembagian\n");

	int jawaban;
	printf ("Pilih Menu Operasi (1,2,3,4) :");
	scanf ("%d", &jawaban);

    printf("Masukkan nilai 1 yang ingin dioperasikan :\n");
    int a, b;
    scanf("%d", &a);
    printf("Masukkan nilai 2 yang ingin dioperasikan :\n");
    scanf("%d", &b);

    switch (jawaban){
        case 1:
            hasil = penjumlahan(a, b);
            printf("%d + %d = %d", a, b, hasil);
            break;
        case 2:
            hasil = pengurangan(a, b);
            printf("%d - %d = %d", a, b, hasil);
            break;
        case 3:
            hasil = perkalian(a, b);
            printf("%d x %d = %d", a, b, hasil);
            break;
        case 4:
            if (b!=0){
                hasil_bagi = pembagian(a, b);
                printf ("%d : %d = %.2f", a, b, hasil_bagi);
            }else {
                printf("error : tidak bisa dibagi dengan 0");
            }
            break;
        default :
            printf ("Pilihan tidak valid");
            break;
    }
    return 0;
}

