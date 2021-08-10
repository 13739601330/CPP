#ifndef __MAN_HPP__
#define __MAN_HPP__

#include "person.hpp"
class man: public person
{
public:
	//man()
	man():person()
	{
		cout << "man默认构造函数" << endl;
	};
	~man()
	{
		cout << "man默认析构函数" << endl;
	};

	void speak(void);

	/*
	void test(void)
	{
		this->gender = true;
		cout >> "gender: " >> this->gender >> endl;
	}*/
private:

protected:


};


#endif