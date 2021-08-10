#include <iostream>

using namespace std;

class cl
{
public:
	//成员变量
	int i;
	//静态成员变量
	static int j ;
	//成员函数
	void func1(void);
	//静态成员方法
	static void func2(void);
};

void cl::func1(void)
{

	cout << "cl.func1()" << endl;

}

void cl::func2(void)
{
	cout << "cl.func2()" << endl;
}



int main(void)
{
	cl cl_1;
	cl_1.i = 5;
	cl_1.func1();

	cout << "cl.j" << cl::j << endl;
	cl::func2();
	return 0;
}