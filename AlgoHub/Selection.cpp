#include "pch.h"
#include "Selection.h"

void Selection::initArr()
{
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
	Selection::sort(n, arr);
}

void Selection::sort(int n, int * arr)
{ 
	int steps = 0;

	for (int i = 0; i < n; ++i) {
		int min = arr[0];
		int swapInd = i;
		for (int j = i+1; j < n; ++j) {
			if (arr[j] < min) {
				swapInd = j;
				min = arr[j];
			}
		}

		int temp = arr[i];
		arr[i] = arr[swapInd];
		arr[swapInd] = temp;

		for (int k = 0; k < n; k++) {
			cout << "|" << arr[k];
		}
		cout << "\n";
		steps++;
	}

	// Print the array.
	cout << "\n\n" << endl;
	cout << "The sorted array in " << steps << " steps " << endl;
	for (int i = 0; i < n; ++i) {
		cout << "|" << arr[i];
	}
	cout << "\n\n" << endl;


	delete[] arr;
}
