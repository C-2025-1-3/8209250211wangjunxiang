#include<iostream>
using namespace std;
void count(const char s[], int count[]) {
	for (int i = 0; i < 26; i++) {
		count[i] = 0;
	}
	int z = 0;
	while (s[z] != 0) {
		char ch = tolower(s[z]);
		if (ch >= 'a' && ch <= 'z') {
			int k = ch - 'a';
			count[k]++;
		}
		z++;
	}

	
	
}
int main() {
	int COUNT[26] = { 0 };
	char s [100];
	cout << "请输入相应的字符串" << endl;
	cin.getline(s, 100);
	count(s, COUNT);
	cout << s[0];
	for (int i = 0; i < 26; i++) {
		char a = 'a';
		if (COUNT[i] != 0) {
			cout << a + i << ":" << COUNT[i] << "times" << endl;
		}
	}
	system("pause");
	return 0;
}