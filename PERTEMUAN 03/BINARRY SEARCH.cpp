#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x){
	int low = 0;
	int high = n - 1;
	while (low <= high){
		int mid = low + (high - low) / 2;
		
		if (arr[mid] == x){
			return mid;
		}
		
		if (arr[mid] < x){
			low = mid + 1;
			
		}
		
	}
	return -1;
	
}
int main(){
	int n;
	cout<<"Masukan Jumlah Bilngan = ";
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++){
		cout << "Masukan NIlai ke-" << i + 1 << " = ";
		cin >> arr[i];
	}
	
	
	for(int i = 1; i < n; ++i){
		int key = arr[i];
		int j = j - 1;
		
		while (j >= 0 && arr[j] > key){
			arr [j + 1] = arr [j];
			j = j - 1;
		}
		arr [j + 1] = key;
	}
	
	cout <<"\nArray setelah diurutkan: ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << "\n\n";
	
	int x;
	cout << "Masukan Nilai yang dicari = ";
	cin >> x;
	
	int result = binarySearch(arr, n, x);
	if (result == -1){
		cout << "Nilai tidak ditemukan dalam array." << endl;
		}else{
			cout << "Nilai " << x << " ditemukan pada indeks ke-" <<result << " (pada array yang sudah di urutkan)."<< endl;
		}
		
}


	
	
	
	
	
	
	
	
	
	
