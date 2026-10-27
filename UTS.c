#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    
	printf (" Masukkan Tipe User (mahasiswa/tamu/karyawan):");
    char tipe_user[20];
	scanf ("%s", &tipe_user);
    char tipe_user1[10] = "mahasiswa";
    char tipe_user2[10] = "karyawan";
    char tipe_user3[10] = "tamu";

    if (strcmp(tipe_user, tipe_user1) == 0 || 
        strcmp(tipe_user, tipe_user2) == 0 ||
        strcmp(tipe_user, tipe_user3) == 0){

        int posisi_lantai = (rand() % 10) ; //menentukan lantai acak 1-10
        printf ("Masukkan Posisi Lantai Saat Ini: %d\n", posisi_lantai);
        int lantai_tujuan;
        printf ("Masukkan Lantai Tujuan: ");
        scanf ("%d", &lantai_tujuan);
        
        int posisi_lift[5];
        for (int i = 0; i < 5; i++){
            posisi_lift[i] = (rand() % 10) + 1;
            printf("Posisi Lift %d: %d", i + 1, posisi_lift[i]);
            }
        
        //int posisi_lift1 = (rand() % 10) + 1;
        //int posisi_lift2 = (rand() % 10) + 1;
        //int posisi_lift3 = (rand() % 10) + 1;
        //int posisi_lift4 = (rand() % 10) + 1;
        //int posisi_lift5 = (rand() % 10) + 1;
       // printf ("\n");
        //printf ("Posisi Lift 1: %d\n", posisi_lift1);
        //printf ("Posisi Lift 2: %d\n", posisi_lift2);
        //printf ("Posisi Lift 3: %d\n", posisi_lift3);
        //printf ("Posisi Lift 4: %d\n", posisi_lift4);
        //printf ("Posisi Lift 5: %d\n", posisi_lift5);

        int lift_terdekat = 0;
        int jarak_lift = abs(posisi_lantai - posisi_lift[0]);
        for (int i = 1; i < 5; i++){
            int jarak = abs(posisi_lantai - posisi_lift[i]);
            if (jarak < jarak_lift){
                jarak_lift = jarak;
                lift_terdekat = i;
            }
        }
        
        printf("\n");
        printf("Lift Terdekat yang bisa anda gunakan adalah lift ke-%d di lantai %d", 
                lift_terdekat + 1, posisi_lift[lift_terdekat]);
        printf("Lift tersebut lebih dekat ke lantai %d... \n", lantai_tujuan);

    } else {
        printf("User tidak dikenali");
    }
 return 0;
}