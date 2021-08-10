#include <iostream>

using namespace std;


/*试图对hello2.cpp中的匿名命名空间进行声明*/
namespace 
{
	extern void func3(void);
}


//匿名命名空间

/*
匿名命名空间内的方法被其他命名空间中调用？

**/

namespace 
{
	void func2(void)
	{
		cout << "func2 in 匿名命名空间" << endl;
	}
}



namespace NS1
{
	void func1(void)
	{
		::func2();
		func3();
		cout << "func1 in NS1" << endl;
	}
}


//主函数
int main(int argc, char const *argv[])
{
	NS1::func1();

	cout << "hello world!" << endl;
	return 0;
}