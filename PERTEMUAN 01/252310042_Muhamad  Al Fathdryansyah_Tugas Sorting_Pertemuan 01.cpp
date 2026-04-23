#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Fungsi tampilkan buku
void tampilkan(vector<string>buku){
	if(buku.empty()){
		cout << "Belum ada Buku.\n";
	}else{
		cout << "Daftar Buku:\n";
		for (int i= 0; i < buku.size();i++){
			cout << i + 1 << ". "<< buku[i] << endl;
		}
	}
	cout << endl;
}

//fungsi sorting ( Bubble Sort )
void sorting(vector<string> &buku){
	int n = buku.size();
	for (int i = 0; i < n - 1; i++){
		for (int j = 0;  j < n - i - 1; j++) {
			if (buku[j] > buku[j + 1]){
				swap(buku[j], buku [j + 1]);
			}
		}
	}
	cout <<"Buku Behasil di-Sorting (A-Z)!\n\n";
}

int main() {
	vector<string> buku;
	int pilihan;
	string judul;
	
	do{
		cout << "=== APLIKASI DATA BUKU===\n";
		cout << "1. Input Buku\n";
		cout << "2. Tampilkan Buku\n";
		cout << "3. sorting Buku (A-Z)\n";
		cout << "4. Keluar\n";
		cout << "Pilih Menu: ";
		cin >> pilihan;
		cin.ignore(); // Agar getline Berjalan
		
		if (pilihan == 1){
			cout << "Masukan Judul Buku: ";
			getline(cin, judul);
			buku.push_back(judul);
			cout << "Buku Berhasil di tambahkan!\n\n";
		}
		else if (pilihan == 2){
			tampilkan(buku);
		}
		else if (pilihan == 3){
			cout << "Sebelum Sorting:\n";
			tampilkan(buku);
			
			sorting(buku);
			
			cout << "Setelah Sorting: \n";
			tampilkan(buku);
		}
		else if (pilihan == 4){
			cout <<"Program Selesai. \n";
		}
		else {
			cout << "Pilihan tidak Valid!\n\n";
		}
		
	}while (pilihan != 4);
	
	return 0;
}




















