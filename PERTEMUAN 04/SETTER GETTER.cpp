#include <iostream>
using namespace std;

class karyawan{
	private:
		string Nama;
		int Umur;
		string Jabatan;
		
	public:
		void setNama(string n){
			Nama = n;
		}
		
		string getNama(){
			return Nama;
		}
		void setUmur(int u){
			Umur = u;
		}
		
		int getUmur(){
			return Umur;
		}
		void setJabatan(string j){
			Jabatan = j;
		}
		
		string getJabatan(){
			return Jabatan;
		}
		
};

int main (){
	karyawan kar;
	kar.setNama("Muhamad Alfath");
	kar.setUmur(19);
	kar.setJabatan("Direktur");
	cout << kar.getNama() << endl;
	cout << kar.getUmur() << endl;
	cout << kar.getJabatan() << endl;
	return 0;
	
}
