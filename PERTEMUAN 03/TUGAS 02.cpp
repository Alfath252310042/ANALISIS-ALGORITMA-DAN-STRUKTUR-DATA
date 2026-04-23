#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string rak;
};

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore(); // buang newline

    Buku daftarBuku[n];

    // Input data buku
    for (int i = 0; i < n; i++) {
        cout << "\nBuku ke-" << i+1 << endl;

        cout << "Judul: ";
        getline(cin, daftarBuku[i].judul);

        cout << "Rak: ";
        getline(cin, daftarBuku[i].rak);
    }

    // Tampilkan data
    cout << "\nData Buku:\n";
    for (int i = 0; i < n; i++) {
        cout << daftarBuku[i].judul 
             << " - " << daftarBuku[i].rak << endl;
    }

    return 0;
}
