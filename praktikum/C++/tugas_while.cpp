#include <iostream>

using namespace std;

int i, j, hasil, jml;

int main() {

	jml = 0;
	j = 1;

	while (j <= 6) {
		if ((j / 2) * 2 != j) {

			hasil = 1;
			i = 1;

			while (i <= j) {
				hasil = hasil * i;
				i++;
			}

			jml = jml + hasil;
		}
		j++;
	}



	cout << jml<<endl;

	return 0;
}