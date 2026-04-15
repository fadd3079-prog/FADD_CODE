#include <stdio.h>
struct waktu{
    int jam;
    int menit;
    int detik;
};

struct waktu tambah_waktu(struct waktu t1,struct waktu t2){
    struct waktu hasil;
    hasil.jam=t1.jam+t2.jam;
    hasil.menit=t1.menit+t2.menit;
    hasil.detik=t1.detik+t2.detik;

    if(hasil.detik>=60){
        hasil.menit+=hasil.detik/60;
        hasil.detik %=60;
    }

    if(hasil.menit>= 60){
        hasil.jam+= hasil.menit / 60;
        hasil.menit %= 60;
    }
    return hasil;
}

int main(){
    struct waktu waktu1 = {2,30,50};
    struct waktu waktu2 = {3,45,30};
    struct waktu waktu_hasil = tambah_waktu(waktu1, waktu2);
    printf("hasil: %d:%d:%d\n", waktu_hasil.jam,waktu_hasil.menit,waktu_hasil.detik);
    return 0;
}
