#include <iostream>
using namespace std;

int main()
{
    int tanggal, bulan, tahun;
    int umur;
    string zodiak;

    // tanggal sekarang
    int tanggal_sekarang = 7;
    int bulan_sekarang = 9;
    int tahun_sekarang = 2025;

    cout << "Masukkan tanggal lahir (dd mm yyyy): ";
    cin >> tanggal >> bulan >> tahun;

    // 29 Februari dianggap 28
    if (bulan == 2 && tanggal == 29)
        tanggal = 28;

    // validasi sederhana
    bool valid = true;
    int maks_hari = 31;
    if (bulan < 1 || bulan > 12 || tahun > tahun_sekarang)
        valid = false;
    else
    {
        if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
            maks_hari = 30;
        else if (bulan == 2)
            maks_hari = 28;

        if (tanggal < 1 || tanggal > maks_hari)
            valid = false;
    }

    if (!valid) {
        cout << "Input tidak valid" << endl; return 0; }

    // hitung umur
    umur = tahun_sekarang - tahun;
    if (bulan_sekarang < bulan)
        umur-1;
    else if (bulan_sekarang == bulan && tanggal_sekarang < tanggal)
        umur-1;

    // syarat umur
    if (umur < 17)
    {
        cout << "Umur anda " << umur << " tahun, belum memenuhi syarat" << endl;
        return 0;
    }

    // tentukan zodiak
 if ((bulan == 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19))
     zodiak = "Aries";
 else if ((bulan == 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20))
     zodiak = "Taurus";
 else if ((bulan == 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20))
        zodiak = "Gemini";
else if ((bulan == 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22))
        zodiak = "Cancer";
    else if ((bulan == 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22))
        zodiak = "Leo";
    else if ((bulan == 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22))
        zodiak = "Virgo";
    else if ((bulan == 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22))
        zodiak = "Libra";
    else if ((bulan == 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 21))
        zodiak = "Scorpio";
    else if ((bulan == 11 && tanggal >= 22) || (bulan == 12 && tanggal <= 21))
 else if ((bulan == 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19)) 
    zodiak = "Capricorn";
    else if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18))
        zodiak = "Aquarius";
    else zodiak = "Pisces";


    // output
    cout << "Umur anda " << umur << " tahun" << endl;
    cout << "Zodiak anda adalah " << zodiak << endl;

    return 0;
}
