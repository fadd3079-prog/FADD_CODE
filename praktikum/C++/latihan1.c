// latihan 1 C
#include <stdio.h>
int nilai;
 int main(){

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);
    if (nilai>=85&&nilai <=100){
        printf("A");
    }
    else if (nilai>= 70 && nilai<85){
        printf("B");
    } else if (nilai >= 50&& nilai <70){
        printf("C");
    } else if(nilai >=0 &&nilai <50){
        printf("D");
    } else{
        printf("masukkan nilai yang benar!");
    }
    return 0;
 }
0