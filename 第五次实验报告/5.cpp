#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int s , int z ) {
		x = s;
		y = z;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);
	cout << "修改前的坐标为 ";
	p.display();
	p.setPoint(20, 20);
	cout << "修改后的坐标为 ";
	p.display();


	return 0;
}