#include <iostream>
using namespace std;

int main (){
	int n = 8;
	int arr [] = {12, 6, 4, 7, 8, 10, 3, 2};
	
	cout << "Sebelum sorting selection sort\n";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	for (int i = 0; i < n - 1; i++){
		int min_idx  = i;
		for (int j = i + 1; j < n; j++){;
			if (arr [j] > arr[min_idx]){
			min_idx = j;
		}
		}
		int temp = arr [i];
		arr [i] = arr [min_idx];
		arr[min_idx] = temp;
		
	}
	cout << "sesuda sorting selection sort\n";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	

}
