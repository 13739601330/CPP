#include <iostream>
#include <iomanip>
//iomanip  算子 cout输出完全攻略
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "hello world" << 8 << endl ;	//运算符重载
	cout << hex << 10 << endl;

	double d = 1.02156456415;


	cout << setprecision(3) << d << endl;
	return 0;
}