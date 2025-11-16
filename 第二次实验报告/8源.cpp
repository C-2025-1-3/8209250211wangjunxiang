#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	double a;
	cout << "请输入要求平方数的数" << endl;
	cin >> a;
	double xn = fabs(a);
	double xn1;
	while (1)
	{
		xn1 = 0.5 * (xn + fabs(a) / xn);
		if (fabs(xn1 - xn) < 1e-5) {
			break;
		}
		xn = xn1;
	}cout << "通过迭代法得到的" << a << "的平方根为" << xn1 << endl;

	return 0;
}