#include "main.hpp"
using namespace std;

int main(void)
{

	man m1("帅"); 	
	cout << "m1.name:" << m1.name << endl;

	person p1 = m1; //子类对象可以直接初始化或直接赋值给父类对象
	cout << "p1.name:" << p1.name << endl;

	return 0;
}

