#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char c;
	int letter = 0, space = 0, digit = 0, other;
	cout << "请输入一行字符" << endl;
	c = cin.get();
	while (c != '\n') {
		if (isalpha(c)) {
			letter++;
		}
		else if(c==''){
			space++
		}
		else if (isdigit(c)) {
			digit++;
		}
		else {
			other++;
		}
		c = cinget();
	}
	cout << "英文字母个数：" << letter << endl;
	cout << "空格个数：" << space << endl;
	cout << "数字个数：" << digit << endl;
	cout << "其他字符个数：" << other << endl;


	return 0;
}