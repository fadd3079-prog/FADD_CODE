#include <stdio.h>

int main(){
    int i=1, jumlah=0, angka=0;
    printf("masukkan angka yang ingin dijumlahkan: ");
    scanf("%d",&angka);
    while (i<=angka){
        jumlah=jumlah+i;
        i=i+1;
    }
    printf("jumlahnya adalah %d", jumlah);
    return 0;
}
