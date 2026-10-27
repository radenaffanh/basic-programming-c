#include <stdio.h>
#include <math.h>
#define pi 3.14


int main(){
    printf ("Menu :\n");
	printf ("\t 1. Menghitung Luas Lingkaran\n");
	printf ("\t 2. Menghitung Keliling Lingkaran :\n");
	printf ("\t 3. Menghitung Volume Silinder\n");

	int jawaban;
	printf ("Pilih Menu (1,2,3) :");
	scanf ("%d", &jawaban);

    switch (jawaban){
        case 1: {
            int r;
		    double L;
		    puts ("Masukkan panjang jari jari :");
		    scanf("%d", &r);
		    L = pi * pow(r, 2); // pow untuk mengkuadratkan nilai r
		    printf ("Luas Lingkaran = %d^2 * 3.14 = %.2lf \n", r, L); // %.2lf untuk 2 angka dibelakang koma karena saya menggunakan double
            break;
        }
        case 2: {
            int r2;
		    double K;
		    puts ("Masukkan panjang jari jari :");
		    scanf ("%d", &r2);
		    K = 2 * r2 * pi;
		    printf ("Keliling Lingkaran =  %d * 2 * 3.14 = %.2lf", r2, K);
            break;
        }
        case 3: {
            int r3, t;
		    double V;
		    puts ("Masukkan panjang jari jari : \n");
		    scanf ("%d", &r3);
		    printf ("Masukkan tinggi silinder : \n");
		    scanf ("%d", &t);
		    V = pi * pow(r3, 2) * t;
		    printf ("Volume silinder = (%d^2) * 3.14 * %d = %.2lf", r3, t, V);
            break;
        }
        default:
            puts ("Menu Tidak Valid");
    }
	
	return 0;
}
