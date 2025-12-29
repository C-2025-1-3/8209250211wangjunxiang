#include<iostream>
using namespace std;
int sum(int day) {
	if (day == 10) {
		return 1;
	}
	return 2*(sum(day+1)+1);
}
int main() {
	int day = 1;
	cout << "猴子第一天摘的桃子个数为" << sum(day) << endl;
	return 0;
}