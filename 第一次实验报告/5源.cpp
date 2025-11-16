#include<iostream>
using namespace std;
int main()
{
	double F = 0;double C= 0;
	cout << "请输入华式温度" << endl;
	cin >> F;
	C = (F - 32)*(5.0/9);
	cout << "相应的摄式温度为" << C << endl;


	return 0;
}


