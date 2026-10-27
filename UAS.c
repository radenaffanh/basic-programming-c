#include <stdio.h>

// Fungsi hitung dV menggunakan pass by referenceUAS
void hitung_dV(float *Vin, float *V, float *R, float *C, float *dV) {
    *dV = (1.0f / (*R * *C)) * (*Vin - *V);
}

int main() {
    float Vin = 5.0f;
    float R = 1.0f;
    float C = 1.0f;
    float t;
    float t_max = 20.0f;
    float h = 1.0f;   // h diganti menjadi 1 detik
    float V = 0.0f;
    float dV;

    FILE *fp = fopen("hasil_simulasi.csv", "w");
    if (fp == NULL) {
        printf("Gagal membuka file untuk menulis\n");
        return 1;
    }
    fprintf(fp, "waktu,tegangan\n");

    for (t = 0.0f; t <= t_max; t += h) {
        hitung_dV(&Vin, &V, &R, &C, &dV);   // Hitung turunan tegangan dengan pass by reference
        V = V + dV * h;                      // Update nilai V dengan metode Euler
        fprintf(fp, "%f,%f\n", t, V);       // Simpan hasil ke file CSV
        printf("t = %.2f, V = %.4f\n", t, V);
    }

    fclose(fp);
    return 0;
}