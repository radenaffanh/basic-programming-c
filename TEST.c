#include <stdio.h>
#define PI 3.14

// 1. Program untuk menginputkan satu karakter dari keyboard kemudian mencetaknya.
void tugas1() {
    char karakter;
    printf("Masukkan satu karakter: ");
    karakter = getchar();
    printf("Karakter yang dimasukkan: %c\n", karakter);
}

// 2. Program untuk menginputkan karakter dengan batasan 15 karakter dan menampilkannya.
void tugas2() {
    char input[16];
    printf("Masukkan maksimal 15 karakter: ");
    fgets(input, sizeof(input), stdin);
    printf("Karakter yang dimasukkan: %s\n", input);
}

// 3. Program untuk menghitung luas lingkaran berdasarkan jari-jari inputan.
void tugas3() {
    float radius, luas;
    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%f", &radius);
    luas = PI * radius * radius;
    printf("Luas lingkaran: %.2f\n", luas);
}

// 4. Program untuk menghitung f(x) = 4x^2 - 3x + 2 dengan x dari input keyboard.
void tugas4() {
    int x, hasil;
    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    hasil = (4 * x * x) - (3 * x) + 2;
    printf("Hasil perhitungan: %d\n", hasil);
}

int main() {
    // Menjalankan masing-masing tugas
    tugas1();
    getchar(); // Membersihkan buffer
    tugas2();
    tugas3();
    tugas4();
    
    return 0;
}
