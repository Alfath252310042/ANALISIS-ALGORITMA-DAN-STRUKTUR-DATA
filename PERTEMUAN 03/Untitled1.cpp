#include <iostream>
using namespace std;

int main() {
    int x[] = {0, 6, 12, 18, 24};
    int jumlah = 5;
    int cari;

    cout << "Masukan data yang dicari: ";
    cin >> cari;

    int tm = 0;
    int R = jumlah - 1;
    int L = 0;
    int mid;

    while (R >= L) {
        mid = (L + R) / 2; // Cari mid

        if (mid == cari) {
            cout << "Bilangan ditemukan" << endl;
            tm = 1;
            break;
        } else if (mid < cari) {
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    if (tm == 0) {
        cout << "Bilangan tidak ditemukan." << endl;
    }

    return 0;
}
