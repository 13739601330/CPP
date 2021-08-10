#include "person.hpp"


//构造函数
person::person()
{
	cout << "默认的构造函数"  << endl;
}

//成员变量(参数列表)
person::person(string name, int age, bool gender):name(name),age(age),gender(gender)
{
	//this->name =  name;
	//this->gender = true;
	//分配动态内存
	//this->grade = 100;
	this->pInt = new int(55);
	//this->pInt2 = new int[100];
	cout << "重载的构造函数"  << this->name <<endl;
}
//析构函数
person::~person()
{
	delete this->pInt;//释放单个内存
	//delete[] this->pInt2;//释放数组内存
	cout << "析构函数" <<endl;
}
//拷贝构造函数
person::person(const person & pn):name(pn.name),age(pn.age),gender(pn.gender)
{
	pInt = new int(*pn.pInt);
	cout << "拷贝构造函数" << endl;
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
{/*
	for (int i = 0; i<100; i++)
	{
		this->pInt2[i] = i;
	}

	cout << this->name<< "睡觉" << endl;
*/
}

void person::print_info(void)
{
	cout << "姓名： "<< this->name << endl;
	cout << "性别： "<< this->gender << endl;
	cout << "年龄： "<< this->age << endl;
	cout << "pInt指针指向的数为："<< *this->pInt << endl;
	//cout << "pInt[56]指针指向的数为："<< (this->pInt2[56]) << endl;

}

//专门用来读grade的方法,是一个常函数
int person::read_grade(void) const
{

	return this->grade;
}
//专门用来写grade的方法
void person::write_grade(int mygrade)
{

	this->grade = mygrade;
}