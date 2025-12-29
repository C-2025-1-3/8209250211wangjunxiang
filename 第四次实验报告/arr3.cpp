#include<iostream>
using namespace std;
int main() {
	bool arr[101] = { false };
	for (int i = 1; i <= 100; i++) {
		if (i==1) {
			for (int l = 1; l <= 100; l++) {
				arr[l] = !arr[l];
			}
		}
		else {
			for (int j = i; j <= 100; j += i) {
				arr[j] = !arr[j];
			}
		}
	}
	for (int s = 1; s <= 100; s++) {
		if (arr[s]) {
			cout << s<<" ";
		}
	}

	return 0;
}