#include <stdio.h>
#include <stdlib.h>


int main(){
	// format identifier = String %s, Number %d, Float %4.2
	
	char nama[20], kelas[20], prodi[20], alamat[50];
	int nim;
	printf ("Nama \t: %s", nama);
	scanf ("%s", &nama);
	printf ("\nNIM \t: %d", nim);
	scanf ("%d", &nim);
	//printf ("\nKelas \t: %s ", kelas);
	//scanf ("%s", &kelas);
	//printf ("\nProdi \t: %s", prodi);
	//scanf ("%s", &prodi);
	//printf ("\nAlamat \t: %s ", &alamat); 
	//scanf ("%s", &prodi);
	
	printf ("Nama \t: %s", nama);
	printf ("\nNIM \t: %d", nim);
	
	return 0;
	
	
}