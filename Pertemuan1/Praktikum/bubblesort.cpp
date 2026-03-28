#include <iostream>
using namespace std; 

int main() {
	int n = 6;
	int arr [] = {4, 8, 3, 6, 1, 23};
	
	cout << "Sebelum Sorting Bubble sort" << endl;
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			int temp = arr[j];
			arr[j] = arr [j + 1];
			arr [j + 1] = temp;
		}
	}
	
	cout << "\nSesudah sorting Bubble sort" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
	
}
