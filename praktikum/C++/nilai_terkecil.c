#include <stdio.h>

int main() {
    int kecil=0;
    int angka=0;
    int i;
    
    printf("masukkan 10 angka: ");
    for(i=0; i<10; i++){
        scanf("%d", &angka);
        if(i==0){
            kecil=angka;
        }else if(angka<kecil){
            kecil=angka;
        }
    }

    printf("angka terkecil adalah %d", kecil);
    return 0;
}
