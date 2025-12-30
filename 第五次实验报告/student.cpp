#include<iostream>
using namespace std;
#include"student.h"
void Student::display() {
	cout << "num： " << num ;
	cout << "  name：" << name ;
	cout << "  sex：" << sex ;
}
void Student::set_value() {
	cout << "请输入学号" << endl;
	cin >> num;
	cout << "请输入名字" << endl;
	cin >> name;
	cout << "请输入性别" << endl;
	cin >> sex;
}