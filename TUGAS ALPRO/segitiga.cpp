#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        cout << "Masukkan angka positif!" << endl;
    }

    return 0;
}
