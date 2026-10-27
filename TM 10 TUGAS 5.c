#include <stdio.h>

int main() {
    const char *bulan[] = {
        "Januari", "Februari", "Maret", "April", "Mei", "Juni",
        "Juli", "Agustus", "September", "Oktober", "November", "Desember"
    };

    for (int i = 0; i < 12; i++) {
        printf("%s\n", bulan[i]);
    }

    return 0;
}
