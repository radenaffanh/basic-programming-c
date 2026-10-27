#include <stdio.h>

float hitung_dV(float Vin, float V, float R, float C) {
    return (1/(R*C)) * (Vin - V);
}

int main() {
    // Inisialisasi variabel dan konstanta
    float Vin = 5.0;
    float R = 1.0;
    float C = 1.0;
    float t;
    float t_max = 20.0;
    float h = 0.1;
    float V = 0.0;

    FILE *fp = fopen("hasil_simulasi1.csv", "w");
    fprintf(fp, "waktu,tegangan\n");

    // Loop metode Euler
    for (t = 0.0; t <= t_max; t += h) {
        // Q2: Hitung dV
        float dV = hitung_dV(Vin, V, R, C);

        // Q3: Update V
        V = V + h * dV;

        // Q4: Simpan data ke file CSV
        fprintf(fp, "%.2f,%.4f\n", t, V);
    }

    fclose(fp);

    return 0;
}
