#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		char  upper_ch = ch - 32;
		cout << upper_ch << endl;
	}
	else {
		
		cout << (int)ch << endl;
	}




	return 0;
}