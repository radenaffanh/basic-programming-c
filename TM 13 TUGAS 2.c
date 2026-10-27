#include <stdio.h>
#include <stdbool.h>

// Fungsi untuk mengecek apakah suatu bilangan adalah bilangan prima
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, i, j, key;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    int prima[n];  // Menyimpan bilangan prima
    int jumlah_prima = 0;

    // Input data dari user
    for (i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i+1);
        scanf("%d", &data[i]);

        if (isPrime(data[i])) {
            prima[jumlah_prima] = data[i];
            jumlah_prima++;
        }
    }

    // Tampilkan data sebelum disorting
    printf("Data sebelum disorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Insertion Sort untuk bilangan prima
    for (i = 1; i < jumlah_prima; i++) {
        key = prima[i];
        j = i - 1;

        while (j >= 0 && prima[j] > key) {
            prima[j + 1] = prima[j];
            j = j - 1;
        }
        prima[j + 1] = key;
    }

    // Tampilkan hasil sorting bilangan prima
    printf("Data prima setelah diurutkan: ");
    for (i = 0; i < jumlah_prima; i++) {
        printf("%d ", prima[i]);
    }
    printf("\n");

    return 0;
}
