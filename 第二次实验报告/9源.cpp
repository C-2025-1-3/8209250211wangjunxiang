#include<iostream>
using namespace std;

int main() {
	int num = 2;
	int days = 0;
	double total = 0;
	while (num <= 100) {		
		days++;
		total += num * (0.8);
		num *= 2;
	}
	cout << "average is " << total / days << endl;
	return 0;
}