#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>
#include <string>
using namespace std;


//声明这个类
class person
{
//访问权限
public:
	//属性
	string name;
	int age;
	bool gender; //男为TRUE,女为FALSE
	int *pInt;//只分配了指针本身的内存，并没有分配指针指向的空间内存
	int *pInt2;
	//构造函数，析构函数
	person();
//    person(string name, int age, bool gender);//overload的构造函数
    person(string name = "晨帅", int age = 23, bool gender = true);//带默认参数的overload的构造函数
	~person();
	//方法
	void eat(void);
	void work(void);
	void sleep(void);
	void print_info(void);
private:

};

















#endif