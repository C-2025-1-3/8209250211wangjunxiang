#include<iostream>
using namespace std;
int cultivate(int a, int b, int &gcd, int &lcm,int m,int n)
{
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	gcd = a;
	lcm = (m * n) / gcd;
	return 0;
}
int main() {
	int m, n,GCD,LCM;
	cin >> m >> n;
	cultivate(m, n, GCD, LCM,m,n);
	cout << "最大公约数为 " << GCD << " 最大公倍数为" << LCM << endl;
	system("pause");
	return 0;
}