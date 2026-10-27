#include <stdio.h>
#include <string.h>

void insertion_sort(char arr[][100], int n) { // [100] untuk jumlah maksimal karakter dan n untuk jumalh nama 
    for (int i = 1; i < n; i++) {  // perulangan untuk nama ynag kedua sampai dngn terakhir
        char nama[100];
        strcpy(nama, arr[i]); // strcpy untuk meng copy string ke dalam variabel nama
        int j = i - 1; // indeks yang akan dibandingkan dengan nama yang dimulai dari elemben sebelumnya

        while (j >= 0 && strcmp(nama, arr[j]) < 0) { //strcmp untuk membandingkan string berdasarkan alfabet
            strcpy(arr[j + 1], arr[j]); //klo masih ada elemen sebelumnya dan "nama" lebih kecil dari arr[j] maka nama yang dicek akan bergeser
            j--;
        }
        strcpy(arr[j + 1], nama);// untuk menempatkan nama sesuai urutan alfabet yang benar
    }
}

int main() {
    char nama_mahasiswa[][100] = {"Raden Affan", "Mosiabisata Alyafi", "Dimas", "Yosia Darren", "Salmandika", "Benaya Joma", "Ruli Fathan Mubina", "Shiraz Akhiru", "Sammy Ahmad"};//inisialisasi nama mahasiswa yang akan diurutkan
    int n = sizeof(nama_mahasiswa) / sizeof(nama_mahasiswa[0]); //hitung berapa array yang dimasukkan yang kemudian menjadi jumlah nama yang diinputkan dengan cara membagi total ukuran array dengan ukuran 1 nama

    insertion_sort(nama_mahasiswa, n); //panggil fungsi insertion_sort untuk mengurutkan nama

    printf("Setelah diurutkan:\n");
    for (int i = 0; i < n; i++) { //menampilkan urutan nama mulai dari paling awal sesuai alfabet dari mulai A hingga Z
        printf("%s\n", nama_mahasiswa[i]); //menampilkan nama mahasiswa yang telah diurutkan dari nama_mahasiswa[1] hingga seterusnya
    }

    return 0; 
}
