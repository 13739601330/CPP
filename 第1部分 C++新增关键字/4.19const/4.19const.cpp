#include <iostream>

using namespace std;

//传值
int compare1_100(int a)
{
	if(a > 100)
		return 0;
	else
		return -1;

}
//传地址，函数内传值未改变 
int compare2_100(const int *pa)
{
	if(*pa > 100)
		return 0;
	else
		return -1;

}

//C++中更倾向于使用引用 compare3_100(a)
int compare3_100(const int &pa)
{
	if( pa > 100)
		return 0;
	else
		return -1;

}

class A
{
public:
	int i;

	int func1(void) const;

};

int A::func1(void) const
{
	cout << "A::func1" << endl;
	this -> i = 100;

}



int main(void)
{

	A cl;
	cl.i = 15;
	cl.func1();

	cout << "cl.i = " << cl.i << endl;
	return 0;
}