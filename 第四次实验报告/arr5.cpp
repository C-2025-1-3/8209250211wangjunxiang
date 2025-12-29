#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int len1 = strlen(s1); int len2 = strlen(s2);
	
	if (len1 > len2) {
		return -1;
	}
	for (int i = 0; i < len2 - len1; i++) {
		bool ismatch = true;
		for (int j = 0; j < len1; j++) {
			if (s1[i] != s2[i + j]) {
				ismatch = false;
				break;
			}
		}
		if (ismatch) {
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100];  char s2[200];
	cout << "请输入第一组字符串" << endl;
	cin.getline(s1, 100);
	cout << "请输入第二组字符串" << endl;
	cin.getline(s2, 200);
	int result = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << result << endl;
	return 0;
}