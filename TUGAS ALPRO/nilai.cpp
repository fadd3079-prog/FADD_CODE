#include <iostream>
using namespace std;

int main()
{
    int JUMLAH_SISWA = 2;
    int siswa[JUMLAH_SISWA];

    // Input nilai 100 siswa
    cout << "Masukkan nilai 100 siswa:\n";
    for (int i = 0; i < JUMLAH_SISWA; i++)
    {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> siswa[i];
    }

    // Cek kelulusan
    cout << "\n Hasil Kelulusan: \n";
    for (int i = 0; i < JUMLAH_SISWA; i++)
    {
        cout << "Siswa ke-" << i + 1 << " : ";
        if (siswa[i] >= 70)
        {
            cout << "LULUS\n";
        }
        else
        {
            cout << "TIDAK LULUS\n";
        }
    }

    return 0;
}
