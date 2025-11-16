#include<iostream>
using namespace std;
int main()
{
	double y, x;
	cin >> x;
	if (x > 0 && x < 10)
	{
	if (x < 1 && x>0) {
		y = 3 - 2 * x;
	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
	}
	else {
		y = x * x;
	}
	cout << "y=" << y << endl;
}

	return 0;
}