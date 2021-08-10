#include <iostream>
#include <iomanip>
//iomanip  算子 cout输出完全攻略
using namespace std;

int main(int argc, char const *argv[])
{
	int val = 0;
	string s1, s2;
	cout << "please input a num:" << endl;
	cin >> hex >> val;
	cout << "the num is:" << dec << val << endl;
	
	cout << "please input a string:" << endl;
	cin >> s1;
	cout << "the str is:" <<  s1 << endl;
	
	return 0;
}