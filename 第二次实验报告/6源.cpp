#include<iostream>
using namespace std;
int main()
{
	int a = 0;int b = 0;int c,d;
	cout << "请输入要运算的两个正整数" << endl;
	cin >> a >> b;
	c = a;d = b;
	while ( d!= 0) {
		int e = c % d;
		c = d;
		d = e;
	}
	cout << "最大公约数为" << c << endl;
	cout << "最大公倍数为" << (a*b)/c << endl;
}