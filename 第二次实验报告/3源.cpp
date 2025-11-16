#include<iostream>
using namespace std;
int main()
{
	int a, b, c, sum;
	a = 0;b = 0;c = 0;
	cout << "请输入三边长" << endl;
	cin >> a >> b >> c;
	sum = a + b + c;
	if (a + b >= c && a + c >= b && b + c >= a) {
		if (b == a || a ==c ||  b == c) {
			cout << "该三角形为等腰三角形并且周长为" << sum  << endl;
		}
		else {
			cout << "该三角形不是等腰三角形且周长为" << sum << endl;
		}
	}
	else {
		cout << "这三边构不成三角形" << endl;
	}

	return 0;
}