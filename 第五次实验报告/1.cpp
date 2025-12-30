#include<iostream>
using namespace std;
class Time {
private:
	int hour, minute, sec;
public:
	void input() {
		cout << "请输入小时时间" << endl;
		cin >> hour;
		cout << "请输入分钟时间" << endl;
		cin >> minute;
		cout << "请输入秒时间" << endl;
		cin >> sec;
		
	}
	int output() {
		cout << hour << ":" << minute << ":" << sec << endl;
		return 0;
	}
};
int main() {
	Time t1;
	t1.input();
	t1.output();


	return 0;
}