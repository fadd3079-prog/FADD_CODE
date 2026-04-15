#include <stdio.h> 

// prosedur (fungsi) untuk menukar nilai
// menerima parameter berupa pointer (alamat memori)
void tukar (int *x,int *y){
    int temp;
    temp=*x;      // ambil nilai di alamat x, simpan ke temp
    *x=*y;        // ubah nilai di alamat x dengan nilai di alamat y
    *y=temp;      // ubah nilai di alamat y dengan nilai temp
}
int main(){
    int a,b;
    printf("masukkan nilai a: ");
    scanf("%d", &a);
    printf("masukkan nilai b: ");
    scanf("%d", &b);
    printf("ebelum ditukar: a = %d, b = %d\n", a,b);

    // memanggil fungsi tukar
    // mengirimkan alamat dari 'a' dan 'b' menggunakan operator &
    tukar(&a,&b);
    printf("setelah ditukar: a = %d, b = %d\n", a,b);
    return 0;
}
