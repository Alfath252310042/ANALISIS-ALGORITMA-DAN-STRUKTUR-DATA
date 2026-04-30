#include <iostream>
using namespace std;

int main (){
	int n = 6;
	int arr [] = {8 ,3 ,7 ,4 ,11 ,2 ,17 ,5};
	
	cout << "\nSebelum sorting insertion sort" << endl;
	for(int i = 0; i++ < n; i++){
		int key = arr [i];
		int j = i - 1;
		cout << arr [i] << " ";
		
		while (j >= 0 && arr [j] < key){
			int key = arr[i];
			j = j - 1;
		}
		arr [j + 1] = key;
	}
	
	cout << "\nSesudah sorting insertion sort" << endl;
	for (int i = 0; i < n; i++){
		cout << arr [i] << " ";
	}
	
	cout <<"\n Shorting iner sort dari terkecil ke terbesar\n";
	for(int i = 0; i++ < n; i++){
		int key = arr [i];
		int j = i - 1;
		cout << arr [i] << " ";
		
		while (j >= 0 && arr [j] < key){
			int key = arr[i];
			j = j - 1;
		}
		arr [j + 1] = key;
	}
}
