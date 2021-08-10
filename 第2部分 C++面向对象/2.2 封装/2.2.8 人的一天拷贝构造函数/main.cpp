#include "person.hpp"

int main(void)
{
	//变量的两种初始化
	int a = 0;
	int b = a;

	//对象的两种初始化方法 
	person p1("shuai", 23, true);
	/*调用了拷贝构造函数（有默认的）*/
	person p2(p1);
    person p3 = p2;

	p1.print_info();
	p2.print_info();
	p3.print_info();

	return 0;
}