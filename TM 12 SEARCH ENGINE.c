#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

int Data[MAX];
int jumlahData = 10; 

void Tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void QuickSort(int L, int R) {
    int i = L, j = R;
    int pivot = Data[(L + R) / 2];

    while (i <= j) {
        while (Data[i] < pivot) i++;
        while (Data[j] > pivot) j--;
        if (i <= j) {
            Tukar(&Data[i], &Data[j]);
            i++;
            j--;
        }
    }
    if (L < j) QuickSort(L, j);
    if (i < R) QuickSort(i, R);
}

int SequentialSearch(int x, int *jumlahPerbandingan) {
    int i = 0;
    *jumlahPerbandingan = 0;
    while (i < jumlahData) {
        (*jumlahPerbandingan)++;
        if (Data[i] == x) return i;
        i++;
    }
    return -1;
}

int BinarySearch(int x, int *jumlahPerbandingan) {
    int L = 0, R = jumlahData - 1, m;
    *jumlahPerbandingan = 0;
    while (L <= R) {
        (*jumlahPerbandingan)++;
        m = (L + R) / 2;
        if (Data[m] == x) return m;
        else if (x < Data[m]) R = m - 1;
        else L = m + 1;
    }
    return -1;
}

void SisipSebelum(int kunci, int nilai) {
    for (int i = 0; i < jumlahData; i++) {
        if (Data[i] == kunci) {
            for (int j = jumlahData; j > i; j--) {
                Data[j] = Data[j-1];
            }
            Data[i] = nilai;
            jumlahData++;
            return;
        }
    }
}


void SisipSesudah(int kunci, int nilai) {
    for (int i = 0; i < jumlahData; i++) {
        if (Data[i] == kunci) {
            for (int j = jumlahData; j > i+1; j--) {
                Data[j] = Data[j-1];
            }
            Data[i+1] = nilai;
            jumlahData++;
            return;
        }
    }
}

void HapusData(int kunci) {
    for (int i = 0; i < jumlahData; i++) {
        if (Data[i] == kunci) {
            for (int j = i; j < jumlahData - 1; j++) {
                Data[j] = Data[j+1];
            }
            jumlahData--;
            return;
        }
    }
}

typedef struct {
    int NIP;
    char Nama[50];
    char Alamat[100];
    char Golongan;
} Pegawai;

Pegawai daftarPegawai[MAX];
int jumlahPegawai = 0;

int CariPegawai(int nip, char* nama, bool pakaiNIP, bool pakaiNama) {
    for (int i = 0; i < jumlahPegawai; i++) {
        bool cocok = true;
        if (pakaiNIP && daftarPegawai[i].NIP != nip)
            cocok = false;
        if (pakaiNama && strcmp(daftarPegawai[i].Nama, nama) != 0)
            cocok = false;
        if (cocok) return i;
    }
    return -1;
}

int main() {
    int i, pilihan, kunci, nilai, pos, perbandingan;
    srand(0);
    jumlahData = 10;
    printf("Data: ");
    for (i = 0; i < jumlahData; i++) {
        Data[i] = rand() / 1000 + 1;
        printf("%d ", Data[i]);
    }
    printf("\nPilih metode pencarian:\n1. Sequential Search\n2. Binary Search\nPilihan: ");
    scanf("%d", &pilihan);

    printf("Kunci yang dicari: ");
    scanf("%d", &kunci);

    if (pilihan == 1) {
        pos = SequentialSearch(kunci, &perbandingan);
    } else {
        QuickSort(0, jumlahData - 1);
        printf("\nData setelah diurutkan: ");
        for (i = 0; i < jumlahData; i++) {
            printf("%d ", Data[i]);
        }
        pos = BinarySearch(kunci, &perbandingan);
    }

    if (pos >= 0)
        printf("\nData ditemukan di posisi %d (%d perbandingan)\n", pos, perbandingan);
    else
        printf("\nData tidak ditemukan (%d perbandingan)\n", perbandingan);

    SisipSebelum(kunci, 99);
    SisipSesudah(kunci, 88);
    HapusData(kunci);

    daftarPegawai[0] = (Pegawai){1001, "Radenn", "Surabaya", 'A'};
    daftarPegawai[1] = (Pegawai){1002, "Arya", "Gresik", 'B'};
    jumlahPegawai = 2;

    int nipCari;
    char namaCari[50];
    printf("\nCari Pegawai berdasarkan:\n1. NIP\n2. Nama\n3. Keduanya\nPilihan: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("NIP: ");
        scanf("%d", &nipCari);
        pos = CariPegawai(nipCari, "", true, false);
    } else if (pilihan == 2) {
        printf("Nama: ");
        scanf("%s", namaCari);
        pos = CariPegawai(0, namaCari, false, true);
    } else {
        printf("NIP: "); scanf("%d", &nipCari);
        printf("Nama: "); scanf("%s", namaCari);
        pos = CariPegawai(nipCari, namaCari, true, true);
    }

    if (pos >= 0)
        printf("\nPegawai ditemukan: %s, Alamat: %s\n", daftarPegawai[pos].Nama, daftarPegawai[pos].Alamat);
    else
        printf("\nPegawai tidak ditemukan.\n");

    return 0;
}
