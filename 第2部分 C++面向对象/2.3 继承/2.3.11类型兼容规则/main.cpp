#include "main.hpp"
using namespace std;

int main(void)
{

	man m1("帅"); 	
	cout << "m1.name:" << m1.name << endl;

	person p1 = m1; //子类对象可以直接初始化或直接赋值给父类对象
	cout << "p1.name:" << p1.name << endl;


	/*父类引用可以直接引用子类对象
	person &r1 = m1;
	r1.speak();
	*/

	/*
	person &r1 = p1;
	r1.speak();
	*/


	/*
	man *mp = &p1; //"person *" 类型的值不能用于初始化 "man *" 类型的实体
	mp->speak();
	*/

	/*
	man *mp = &m1;
	mp->speak();
	*/

	/*
	person *pp = &m1; //类型兼容，父类指针可以直接指向子类对象，m1直接当做了person的对象
	pp->speak();	//pp指向的是父类对象
	m1.speak();
	*/

	/*
	person *pp = &p1;
	pp->speak();
	*/
	return 0;
}

/*
(1)子类对象可以当作父类对象使用，也就是说子类对象可以无条件隐式类型转换为一个父类对象
(2)子类对象可以直接初始化或直接赋值给父类对象
(3)父类指针可以直接指向子类对象
(4)父类引用可以直接引用子类对象
*/