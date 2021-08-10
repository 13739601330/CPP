#ifndef __MAN_HPP__
#define __MAN_HPP__

#include "person.hpp"
class man : public person
{
public:
	//man()
	man() : person() //显式调用父类的构造函数
	{
		cout << "man默认构造函数" << endl;
	};
	man(string myname) : person(myname) //显式调用父类的构造函数
	{
		cout << "man默认构造函数" << endl;
	};
	~man() //默认就会调用父类的析构函数，不可显式声明
	{
		cout << "man默认析构函数" << endl;
	};

	void speak(void); //redefining

private:
protected:
};

#endif