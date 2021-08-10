#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
#include <string>
using namespace std;
class person
{
public:
	//公有属性
	string name;
	int age;
	//	bool gender;
	//构造函数，析构函数
	person()
	{
		cout << "person默认构造函数" << endl;
	};
	person(string myname)
	{
		name = myname;
	}
	~person()
	{
		cout << "person默认析构函数" << endl;
	};
	//公有方法
	void eat(void);
	void work(void);
	void print(void);
	void speak(void);

private:
protected:
};

#endif