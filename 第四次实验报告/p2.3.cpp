#include<iostream>
using namespace std;
void sortarray(int* arr, int n) {
	for (int j = 0; j < n - 1; j++) {
		for (int k = 0; k < n - 1 - k; k++) {
			if (arr[k] > arr[k + 1]) {
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
}
int main() {
	int n = 0;
	cout << "请输入数组元素个数" << endl;
	int* arr = new int[n];
	cout << "请输入数组内容" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sortarray(arr, n);
	int* p = arr;
	for (int i = 0; i < n; i++) {
		cout << *p << endl;
		p++;
	}
	delete[]arr;
	return 0;
}