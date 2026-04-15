#include <stdio.h>

struct waktu{
    int jam;
    int menit;
    int detik;
};

void tampilkanWaktu(struct waktu t){
    printf("Waktu: %02d:%02d:%02d\n", t.jam, t.menit, t.detik);
}

struct waktu tambahWaktu(struct waktu t1, struct waktu t2){
    struct waktu hasil;
    hasil.detik = t1.detik + t2.detik;
    hasil.menit = t1.menit + t2.menit;
    hasil.jam = t1.jam + t2.jam;

    if (hasil.detik >= 60) {
        hasil.menit += hasil.detik / 60;
            hasil.detik %= 60;
    }
    if (hasil.menit >= 60) {
        hasil.jam += hasil.menit / 60;
        hasil.menit %= 60;
    }
    return hasil;
}

int main() {
    struct waktu waktu1, waktu2, hasil;
    waktu1.jam = 1;
    waktu1.menit = 30;
    waktu1.detik = 45;
    waktu2.jam = 2;
    waktu2.menit = 45;
    waktu2.detik = 30;

    printf("Waktu 1: ");
    tampilkanWaktu(waktu1);
    printf("Waktu 2: ");
    tampilkanWaktu(waktu2);

    hasil = tambahWaktu(waktu1, waktu2);
    printf("Hasil penjumlahan: ");
    tampilkanWaktu(hasil);

    return 0;
}
