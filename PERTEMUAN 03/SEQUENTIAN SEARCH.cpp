#include <iostream>
using namespace std;

int main(){
	int Nilai[20];
	int Posisi[20];
	int i, n, Bil, jmlh = 0;
	bool ketemu = false;
	
	cout << " Masukan Jumlah deret Bilangan = ";
	cin >> n;
	cout << endl;
	
	for (int i = 0; i < n; i++){
		cout << "Nilai blangan ke-" << i << " = ";
		cin>> Nilai[i];
	}
	
	cout << "\Deret Bilangan = ";
	for (int i = 0; i < n; i++){
		cout << Nilai [i]  << " ";
		
		
		cout << "\n\n Memasukan Bilangan yang akan dicari = ";
		cin >> Bil;
		
		for (int i = 0; i < n; i++){
			if (Nilai[i] == Bil){
				ketemu = true;
				Posisi[jmlh] = 1;
				jmlh++;
			}
		}
		
	if (ketemu){
		cout << "\nBilangan " << Bil << " ditemukan sebanyak " << jmlh << " kali ";
		cout << "\pada posisi indeks ke = ";
		for (i = 0; i < jmlh; i++){
			cout << Posisi[i] << " ";
		}
		
	}else{
		cout << "\nMaaf Bilangan " << Bil << " tidak di temukan";
	}
	}
}
