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
	//构造函数，析构函数
	person();
	person(string name);//overload的构造函数
	~person();
	//方法
	void eat(void);
	void work(void);
	void sleep(void);
private:

};

















#endif