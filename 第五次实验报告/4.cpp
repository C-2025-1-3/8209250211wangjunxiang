#include<iostream>
using namespace std;
class Student {
public:
	int num;
	int grade;
};
int max(Student s[5]) {
	int result = 0;
	for (int i = 1; i < 5; i++) {
		if (s[result].grade < s[i].grade) {
			result = i;
		}
	}
	return s[result].num;
}
int main() {
	Student arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "请输入第" << i + 1 << "个学生的学号和成绩" << endl;
		cout << "学号: ";   cin >> arr[i].num;
		cout << "成绩: ";   cin >> arr[i].grade;
	}
	cout << "成绩最高的学生的学号为: " << max(arr) << endl;
	return 0;
}