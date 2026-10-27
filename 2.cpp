#include <stdio.h>
#include <stdlib.h>


int main(){
	// format identifier = String %s, Number %d, Float %4.2
	int nim;
	char nama[20], kelas[20], prodi[20], alamat[50];
	
	printf ("Nama \t:");
	scanf ("%s", &nama);
	printf ("\nNIM \t:");
	scanf ("%d", &nim);
	printf ("\nKelas \t:");
	scanf ("%s", &kelas);
	printf ("\nProdi \t:");
	scanf ("%s", &prodi);
	printf ("\nAlamat \t:"); 
	scanf ("%s", &alamat);


	printf ("Nama \t:", &nama);
	printf ("\nNIM \t:", nim);
	printf ("\nKelas \t:", kelas);
	printf ("\nProdi \t:", prodi);
	printf ("\nAlamat \t:", alamat); 
	return 0;	
}
