#include <stdio.h>

// prosedur menghitung luas dan keliling persegi panjang
// 'panjang' dan 'lebar' adalah parameter input
// '*luas' dan '*keliling' adalah parameter output
void hitungLuasKeliling(int panjang,int lebar,int *luas,int *keliling) {

    // mengisi nilai ke alamat memori yang ditunjuk oleh pointer 'luas'
    *luas=panjang*lebar;

    // mengisi nilai ke alamat memori yang ditunjuk oleh pointer 'keliling'
    *keliling=2 * (panjang+lebar);
}

int main() {
    int p,l;            // variabel  menyimpan input panjang dan lebar
    int hasilLuas;      // variabel menyimpan hasil luas
    int hasilKeliling;  // variabel menyimpan hasil keliling

    // meminta input dari user
    printf("masukkan panjang: ");
    scanf("%d",&p);
    printf("masukkan lebar: ");
    scanf("%d",&l);

    // memanggil prosedur
    // p dan l dikirim nilainya
    // &hasilLuas dan &hasilKeliling dikirim alamatnya
    hitungLuasKeliling(p,l,&hasilLuas,&hasilKeliling);

    // menampilkan hasil
    // 'hasilLuas' dan 'hasilKeliling' sudah terisi oleh fungsi
    printf("luas persegi panjang: %d\n",hasilLuas);
    printf("keliling persegi panjang: %d\n",hasilKeliling);
    return 0;
}