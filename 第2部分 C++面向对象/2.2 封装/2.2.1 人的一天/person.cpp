#include "person.hpp"


//构造函数
person::person()
{
	cout << "默认的构造函数"  << endl;
}
person::person(string name)
{
	this->name =  name;
	cout << "重载的构造函数"  << this->name <<endl;
}
//析构函数
person::~person()
{
	
}



void person::eat(void)
{
	cout << this->name << "吃饭" << endl;
}
void person::work(void)
{
	if (this->gender == true)
	    cout << this->name << "敲代码！" << endl;
    else
    	cout << this->name << "买买买！" << endl;
}
void person::sleep(void)
{
	cout << this->name<< "睡觉" << endl;
}