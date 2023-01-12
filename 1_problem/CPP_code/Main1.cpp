#include<bits/stdc++.h>
using namespace std;

int small_in(int arr[], int n) {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int main() {
	int arr1[] = {23, 6, 34, 2, 4, 89, 5};
	int n = 7;
	cout << "Smallest variable is: " << small_in(arr1, n) << endl;
}

