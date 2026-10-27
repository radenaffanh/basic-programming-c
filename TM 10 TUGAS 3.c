#include <stdio.h>

void kali_tiga(int *a, int *b, int *c, int *d) {
    *a *= 3;
    *b *= 3;
    *c *= 3;
    *d *= 3;
}

int main() {
    int w = 10, x = 5, y = 7, z = 19;

    printf("before: w=%d, x=%d, y=%d, z=%d\n", w, x, y, z);

    // panggil fungsi agar bilangan dikalikan 3, dengan pointer ke variabel
    kali_tiga(&w, &x, &y, &z);

    printf("after: w=%d, x=%d, y=%d, z=%d\n", w, x, y, z);

    return 0;
}
