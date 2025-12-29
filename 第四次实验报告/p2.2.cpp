#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	const char* p = hexString;
	int num;
	while (*p != '\0') {
		char c = toupper(*p);
		if (c >= '1' && c <= '9') {
			num = c - '0';
		}
		else if (c >= 'A' && c <= 'F') {
			num = c - 'A' + 10;
		}
		else {
			cout << "警告:非法16进制字符" <<*p<<"被忽略"<< endl;
			num = 0;
		}
		result = result * 16 + num;
		p++;
	}
	return result;

}
int main() {
	char hexStr[100];
	cout << "请输入16进制字符串" << endl;
	cin >> hexStr;
	int s = parseHex(hexStr);
	cout << "16进制字符串\"" << hexStr << "\"对应的十进制数师:" << s << endl;
	return 0;
}
