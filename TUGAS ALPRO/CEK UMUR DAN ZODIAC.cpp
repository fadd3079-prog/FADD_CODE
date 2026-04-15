#include <iostream>
using namespace std;

int main()
{
    int tgl, bln, thn;
    cout << "Masukkan tanggal lahir (dd mm yyyy): ";
    cin >> tgl >> bln >> thn;

    int ts = 3, bs = 9, ths = 2025;
    int jhb[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (bln < 1 || bln > 12 || tgl < 1 || tgl > jhb[bln - 1] || thn > ths)
    {
        cout << "Input tidak valid!" << endl;
        return 0;
    }

    if (tgl == 29 && bln == 2)
        tgl = 28;

    int h = tgl;
    for (int i = 0; i < bln - 1; i++)
        h += jhb[i];

    int umur = ths - thn;
    if (bs < bln || (bs == bln && ts < tgl))
        umur--;

    if (umur < 17)
    {
        cout << "Umur anda " << umur << " tahun. Belum memenuhi syarat!" << endl;
        return 0;
    }
    else
        cout << "Umur anda " << umur << " tahun." << endl;

    string z;
    if (h >= 80 && h <= 109)
        z = "Aries";
    else if (h >= 110 && h <= 140)
        z = "Taurus";
    else if (h >= 141 && h <= 171)
        z = "Gemini";
    else if (h >= 172 && h <= 203)
        z = "Cancer";
    else if (h >= 204 && h <= 234)
        z = "Leo";
    else if (h >= 235 && h <= 265)
        z = "Virgo";
    else if (h >= 266 && h <= 295)
        z = "Libra";
    else if (h >= 296 && h <= 325)
        z = "Scorpio";
    else if (h >= 326 && h <= 355)
        z = "Sagitarius";
    else if ((h >= 356 && h <= 365) || (h >= 1 && h <= 19))
        z = "Capricorn";
    else if (h >= 20 && h <= 49)
        z = "Aquarius";
    else
        z = "Pisces";

    cout << "Zodiak anda adalah " << z << endl;


    return 0;

}
