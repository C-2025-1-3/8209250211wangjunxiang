#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout<<oct << "output in unsigned int 1 type " << testUnint << endl;
	cout<<oct << "output in char type " << static_cast<char>(testUnint )<< endl;
	cout<<oct << "output in short type " << static_cast<short>(testUnint) << endl;
	cout<<oct<< "output in  int  type " << static_cast<int>(testUnint) << endl;
	cout<<oct << "output in  double type " << static_cast<double>(testUnint) << endl;
	cout<<oct << "output in double type " <<setprecision(4) <<static_cast<double>(testUnint) << endl;
	cout<<oct<< "output in Hex unsigned int  type " <<hex<<testUnint << endl;
	
	return 0;
}





