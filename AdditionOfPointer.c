#include<stdio.h>
int main(){
    int N = 4;
    int *prt1, *prt2;

    prt1 = &N;
    prt2 = &N;

    printf("Pointer prt2 before addition: ");
    printf("%p\n",prt2);

    prt2 = prt2 + 3;
    printf("pointer prt2 after Addition: ");
    printf("%p\n",prt2);

    return 0;
}
