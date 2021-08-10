#include <iostream>

using namespace std;

int main(void)
{

//	int i = 5;
	const short ci = 5;
	auto au = ci;
	decltype(ci) cd = 54;

//	cd = 64; //会报错
	auto i = 5;	

	int j = 5;
	decltype(j) a = 7;
	cout << "ci type = " << typeid(ci).name() << endl;
	cout << "au type = " << typeid(au).name() << endl;
}
    cout << "i type = " << typeid(i).name() << endl;

    cout << "j type = " << typeid(j).name() << endl;
    cout << "a type = " << typeid(a).name() << endl;
	return 0;
