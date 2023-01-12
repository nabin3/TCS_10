#include<bits/stdc++.h>
#include <climits>
using namespace std;

void getElements(int arr[], int n) {

	if (n < 2) {
		cout << -1 << " " << -1 << endl; // when array size is not greater than 2
	} else {

		int small = INT_MAX;
		int second_small = INT_MAX;
		int large = INT_MIN;
		int second_large = INT_MIN;

		for (int i = 0; i < n; i++) {
			small = min(small, arr[i]);
			large = max(large, arr[i]);
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] < second_small && small != arr[i]) {
				second_small = arr[i];
			}
			if (arr[i] > second_large && large != arr[i]) {
				second_large = arr[i];
			}
		}
		
		cout << "second Small element = " << second_small << endl;
		cout << "second Large element = " << second_large << endl;
	}
}

int main() {
	int arr1[] = {2, 5, 1, 30, 25, 38, 28};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	getElements(arr1, n);
}
