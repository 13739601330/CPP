#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s1, s2, s3;

	s1 = "shuai";
	s2 = "guo";
	cout << "size:" << s1.size() << endl;
	cout << "s1.append(s2) :" << s1.append(s2) << endl;
	cout << "s1:" << s1 << endl;
	cout << "s1+s2" << s1 + s2 << endl;
	return 0;
}