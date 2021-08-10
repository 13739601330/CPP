#include "person.hpp"

#include <iostream>



//公有方法
void person::eat(void)
{

}
void person::work(void)
{
	
}
void person::print(void)
{
	cout << "姓名：" <<this->name << endl;
	cout << "年龄："<<this->age << endl;
	cout << "——————————————"<< endl;
}
void person::speak(void)
{
	cout << "person" << this->name << "说话" << endl;
}
void person::test_high(void)
{
	
	cout << this->name << "身高" << height <<endl;
}

 