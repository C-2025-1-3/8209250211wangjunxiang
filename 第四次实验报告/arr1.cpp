#include<iostream>
using namespace std;
int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < 10; j++) {
		for (int s = j+1; s < 10; s++) {
			if (arr[j] == arr[s]) {
				for (int z = 0; z < 9-s; z++) {
					arr[s] = arr[s + 1];
				}
			}
		}
	}
	for (int m = 0; m < 10; m++) {
		cout<< arr[m];
	}
	return 0;
}