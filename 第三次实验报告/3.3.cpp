#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	double cel, fah;
	for (cel = 40; cel >= 31; cel--) {
		cout << "摄氏温度:" << cel << "等于华氏温度:" << celsius_to_fah(cel) << endl;
	}
	cout << endl;
	for (fah = 120; fah >= 30; fah-=10) {
		cout << "华氏温度:" << cel << "等于摄氏温度:" << fahrenheit_to_cel(fah) << endl;
	}
	return 0;
}