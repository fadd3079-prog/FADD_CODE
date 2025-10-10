#include <iostream>
using namespace std;

int main() {
    int jumlah_siswa = 2;
    int nilai[jumlah_siswa];
    int total = 0;

    cout << "Masukkan nilai " << jumlah_siswa << " siswa:\n";
    for (int i = 0; i < jumlah_siswa; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
        total = total + nilai[i];
    }

    float rata = (float)total / jumlah_siswa;

    cout << "\nNilai semua siswa:\n";
    for (int i = 0; i < jumlah_siswa; i++) {
        cout << "Siswa ke-" << i + 1 << ": " << nilai[i] << endl;
    }

    cout << "\nRata-rata nilai = " << rata << endl;

    return 0;
}
