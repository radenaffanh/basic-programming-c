#include <stdio.h>

int main(){
    int a;
    a = 12;
    printf("%d\n", a);
    int *pointer_dari_a;
    *pointer_dari_a = a;
    printf("%d", *pointer_dari_a);
}