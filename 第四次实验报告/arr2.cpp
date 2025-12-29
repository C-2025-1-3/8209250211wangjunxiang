#include<iostream>
using namespace std;
int main() {
	int arr[10] = { 12,31,23,24,53,43,61,74,85,47};
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int s = 0; s < 10; s++) {
		cout << arr[s]<<"  ";
	}
	return 0;
}