#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    int genap[n];  // Array untuk menyimpan bilangan genap
    int jumlah_genap = 0;

    // Input data
    for(i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i+1);
        scanf("%d", &data[i]);

        // Simpan ke array genap jika bilangan genap
        if (data[i] % 2 == 0) {
            genap[jumlah_genap] = data[i];
            jumlah_genap++;
        }
    }

    // Tampilkan data sebelum disorting
    printf("Data sebelum disorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Bubble Sort untuk bilangan genap
    for(i = 0; i < jumlah_genap - 1; i++) {
        for(j = 0; j < jumlah_genap - i - 1; j++) {
            if(genap[j] > genap[j+1]) {
                temp = genap[j];
                genap[j] = genap[j+1];
                genap[j+1] = temp;
            }
        }
    }

    // Tampilkan hasil sorting
    printf("Data genap yang diurutkan: ");
    for(i = 0; i < jumlah_genap; i++) {
        printf("%d ", genap[i]);
    }
    printf("\n");

    return 0;
}
