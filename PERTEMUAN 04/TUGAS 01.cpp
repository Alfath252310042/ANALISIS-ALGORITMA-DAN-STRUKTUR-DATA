#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nim;
    string nama;
    string jurusan;
    double ipk;

public:
    // Setter
    void setNIM(string n) { nim = n; }
    void setNama(string n) { nama = n; }
    void setJurusan(string j) { jurusan = j; }
    void setIPK(double i) {
        if (i >= 0.0 && i <= 4.0)
            ipk = i;
        else
            cout << "IPK tidak valid! Harus antara 0.0 - 4.0" << endl;
    }

    // Getter
    string getNIM() { return nim; }
    string getNama() { return nama; }
    string getJurusan() { return jurusan; }
    double getIPK() { return ipk; }

    // Display
    void tampilkanData() {
        cout << "\n===== DATA MAHASISWA =====" << endl;
        cout << "NIM     : " << getNIM() << endl;
        cout << "Nama    : " << getNama() << endl;
        cout << "Jurusan : " << getJurusan() << endl;
        cout << "IPK     : " << getIPK() << endl;
        cout << "==========================" << endl;
    }
};

int main() {
    Mahasiswa mhs;
    string nim, nama, jurusan;
    double ipk;

    cout << "===== INPUT DATA MAHASISWA =====" << endl;
    cout << "Masukkan NIM     : ";
    cin >> nim;
    mhs.setNIM(nim);

    cout << "Masukkan Nama    : ";
    cin.ignore();
    getline(cin, nama);
    mhs.setNama(nama);

    cout << "Masukkan Jurusan : ";
    getline(cin, jurusan);
    mhs.setJurusan(jurusan);

    cout << "Masukkan IPK     : ";
    cin >> ipk;
    mhs.setIPK(ipk);

    mhs.tampilkanData();

    return 0;
}
