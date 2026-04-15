// latihan 3 C
#include <stdio.h>
int angka;
int main(){
    printf("masukkan angka: ");
    scanf("%d", &angka);

    if(angka==0){
        printf("bilangan tersebut nol");
    }else if(angka>0){
        printf("bilangan tersebut positif");
    }else{
        printf("bilangan tersebut negatif");
    }

return 0;

}