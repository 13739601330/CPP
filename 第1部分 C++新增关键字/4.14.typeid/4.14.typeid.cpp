#include <iostream>
#include <typeinfo>
using namespace std;
struct s1
	{
			char c;
	short s;
	int a;
	};

int main(void)
{
	char c;
	signed char sc;
	unsigned char uc;
	short s;
	int a;
	double d;
	float f;
	s1 s11;


	cout << "a type = " << typeid(a).name() << endl;
	
	cout << "c type = " << typeid(c).name() << endl;
	
	cout << "sc type = " << typeid(sc).name() << endl;
	
	cout << "uc type = " << typeid(uc).name() << endl;
	
	cout << "s type = " << typeid(s).name() << endl;
	
	cout << "d type = " << typeid(d).name() << endl;
	
	cout << "f type = " << typeid(f).name() << endl;
	
	cout << "s11 type = " << typeid(s11).name() << endl;

	return 0;
}