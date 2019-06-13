#include "pch.h"
#include "Insertion.h"

/*
	Initializes the array by prompting for a size, and 

*/
void Insertion::initArr() {
	int n;
	cout << "Enter the number of elements that will be in the array" << endl;
	cin >> n;
	int * arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << endl;
		cout << "Enter the element at position " << i << endl;
		cin >> arr[i];

		
	}
	
	cout << "\n";
	cout << "Starting sort..." << endl;
	Insertion::sort(n, arr);
}

void Insertion::sort(int n, int * arr) {
	int steps = 0;
	for (int i = 1; i < n; ++i) {
		int val = arr[i];
		for (int j = i-1; j >= 0; --j) {
			if (val < arr[j]) {
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}

			for (int k = 0; k < n; k++) {
				cout << "|" << arr[k];
			}
			cout << "\n";
			steps++;
		}
	}

	// Print the array.
	cout << "\n\n" << endl;
	cout << "The sorted array in " << steps << " steps "<< endl;
	for (int i = 0; i < n; ++i) {
		cout << "|" << arr[i];
	}
	cout << "\n\n" << endl;


	delete [] arr;
}