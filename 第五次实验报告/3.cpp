#include<iostream>
using namespace std;
class Cuboid {
private:
	int L;
	int W;
	int H;
public:
	void input() {
		cout << "请输入长的大小" << endl;
		cin >> L;
		cout << "请输入宽的大小" << endl;
		cin >> W;
		cout << "请输入高的大小" << endl;
		cin >> H;
	}
	int CulculateV() {
		return L * W * H;
	}
};
int main() {
	Cuboid c1, c2, c3;
	cout << "请输入分别三个长方形的长，款，高" << endl;
	c1.input();
	c2.input();
	c3.input();
	cout << "第一个长方体的体积为 " << c1.CulculateV() << endl;
	cout << "第二个长方体的体积为 " << c2.CulculateV() << endl;
	cout << "第三个长方体的体积为 " << c3.CulculateV() << endl;
	return 0;
}