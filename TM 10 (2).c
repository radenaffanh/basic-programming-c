#include <stdio.h>

int main(){
    char nama[10] = "aliong";
    char *p;
    p = nama;
    while (*p!=NULL){
        printf("%c", *p);
        p++;
    }
    printf("\n");
    p = &nama[5];
    while(nama[10] != NULL){
        printf("%c", nama[10]);
        nama[10]++;
    }
    while(*p != NULL){
        printf("%c", *p);
        p--;
    }
    printf("\n");
    return 0;
}
