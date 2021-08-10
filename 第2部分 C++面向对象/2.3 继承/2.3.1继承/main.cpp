#include "main.hpp"

#include <iostream>

using namespace std;
int main(void)
{
	man m1;
	m1.name = "M";
	m1.age = 16;
	//	m1.test_high();
	m1.speak();

	//	m1.height = 55; //protected成员 不可在类的外部使用
	//m1.speak();
	//m1.print();
	//	m1.test();
	/*
	person p1;
	p1.name = "帅";

	p1.speak();
	p1.print();
*/
	return 0;
}